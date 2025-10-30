int __fastcall sub_437C8(int a1)
{
  const char *v1; // r5
  FILE *v2; // r4
  FILE *v3; // r0
  int *v5; // r0
  char *v6; // r0
  int v7; // r3
  int *v8; // r0
  char *v9; // r0
  int v10; // r3
  int *v11; // r0
  char *v12; // r0
  int v13; // r3
  int *v14; // r0
  char *v15; // r0
  int v16; // r3
  int *v17; // r0
  char *v18; // r0
  unsigned int ptr; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( a1 )
    v1 = "/config/counter";
  else
    v1 = "/tmp/counter";
  v2 = fopen(v1, "r");
  if ( !v2 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v14 = _errno_location();
      v15 = strerror(*v14);
      snprintf(s, 0x800u, "fail to open counter file, err:%s", v15);
      sub_3AF5C(3, s, 0, v16);
    }
    v2 = fopen(v1, "w");
    if ( !v2 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      v8 = _errno_location();
      v9 = strerror(*v8);
      snprintf(s, 0x800u, "can not open counter file, err:%s", v9);
      sub_3AF5C(3, s, 0, v10);
      return 0;
    }
    ptr = 0;
    if ( fwrite(&ptr, 1u, 4u, v2) != 4 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v5 = _errno_location();
        v6 = strerror(*v5);
        snprintf(s, 0x800u, "can not write,err:%s", v6);
        sub_3AF5C(3, s, 0, v7);
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
      if ( (unsigned int)off_AFC24 <= 3 )
      {
LABEL_8:
        fclose(v2);
        return 0;
      }
      v11 = _errno_location();
      v12 = strerror(*v11);
      snprintf(s, 0x800u, "read counter file failed! err:%s\n", v12);
LABEL_21:
      sub_3AF5C(3, s, 0, v13);
      goto LABEL_8;
    }
    if ( ptr > 1 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "reach max restart times");
        sub_3AF5C(3, s, 0, *(int *)"start times");
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
        if ( (unsigned int)off_AFC24 <= 3 )
          goto LABEL_8;
        v17 = _errno_location();
        v18 = strerror(*v17);
        snprintf(s, 0x800u, "can not write,err:%s", v18);
        goto LABEL_21;
      }
      fflush(v2);
      fclose(v2);
      return 1;
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      strcpy(s, "fail to w open counter file");
      sub_3AF5C(3, s, 0, *(int *)"en counter file");
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return 0;
    strcpy(s, "fail to w+ open counter file");
    sub_3AF5C(3, s, 0, *(int *)"");
    return 0;
  }
}
