int __fastcall sub_45520(int a1)
{
  const char *v1; // r5
  FILE *v2; // r4
  FILE *v3; // r0
  FILE *v5; // r0
  int *v6; // r0
  char *v7; // r0
  int v8; // r3
  int *v9; // r0
  char *v10; // r0
  int v11; // r3
  int *v12; // r0
  char *v13; // r0
  int v14; // r3
  int *v15; // r0
  char *v16; // r0
  int v17; // r3
  int *v18; // r0
  char *v19; // r0
  unsigned int ptr; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( a1 )
    v1 = "/config/counter";
  else
    v1 = "/tmp/counter";
  v2 = fopen(v1, "r");
  if ( !v2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v15 = _errno_location();
      v16 = strerror(*v15);
      snprintf(s, 0x800u, "fail to open counter file, err:%s", v16);
      sub_3B6AC(3, s, 0, v17);
    }
    v5 = fopen(v1, "w");
    v2 = v5;
    if ( !v5 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 0;
      v12 = _errno_location();
      v13 = strerror(*v12);
      snprintf(s, 0x800u, "can not open counter file, err:%s", v13);
      sub_3B6AC(3, s, 0, v14);
      return 0;
    }
    ptr = 0;
    if ( fwrite(&ptr, 1u, 4u, v5) != 4 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v6 = _errno_location();
        v7 = strerror(*v6);
        snprintf(s, 0x800u, "can not write,err:%s", v7);
        sub_3B6AC(3, s, 0, v8);
      }
      goto LABEL_8;
    }
    fflush(v2);
  }
  fclose(v2);
  v3 = fopen(v1, "r");
  v2 = v3;
  if ( v3 )
  {
    ptr = 0;
    if ( fread(&ptr, 1u, 4u, v3) != 4 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
      {
LABEL_8:
        fclose(v2);
        return 0;
      }
      v9 = _errno_location();
      v10 = strerror(*v9);
      snprintf(s, 0x800u, "read counter file failed! err:%s\n", v10);
LABEL_22:
      sub_3B6AC(3, s, 0, v11);
      goto LABEL_8;
    }
    if ( ptr > 1 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "reach max restart times");
        sub_3B6AC(3, s, 0, *(int *)"start times");
      }
      goto LABEL_8;
    }
    ++ptr;
    fclose(v2);
    v2 = fopen(v1, "w");
    if ( v2 )
    {
      if ( fwrite(&ptr, 1u, 4u, v2) != 4 )
      {
        if ( (unsigned int)dword_B308C <= 3 )
          goto LABEL_8;
        v18 = _errno_location();
        v19 = strerror(*v18);
        snprintf(s, 0x800u, "can not write,err:%s", v19);
        goto LABEL_22;
      }
      fflush(v2);
      fclose(v2);
      return 1;
    }
    else
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 0;
      strcpy(s, "fail to w open counter file");
      sub_3B6AC(3, s, 0, *(int *)"en counter file");
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return 0;
    strcpy(s, "fail to w+ open counter file");
    sub_3B6AC(3, s, 0, *(int *)"");
    return 0;
  }
}
