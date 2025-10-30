int __fastcall sub_45BD4(unsigned int *a1)
{
  FILE *v2; // r0
  FILE *v3; // r4
  int *v4; // r0
  char *v5; // r0
  int v6; // r3
  int v8; // r3
  unsigned int v9; // r3
  FILE *v10; // r8
  int v11; // r12
  int *v12; // r0
  char *v13; // r0
  int v14; // r3
  unsigned int v15; // r3
  int *v16; // r0
  char *v17; // r0
  int v18; // r3
  int v19; // r3
  unsigned int v20; // r3
  int *v21; // r0
  char *v22; // r0
  int v23; // r3
  int v24; // r3
  int v25; // [sp+0h] [bp-808h] BYREF
  int v26; // [sp+4h] [bp-804h]
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = fopen("/config/leveldown", "r+");
  v3 = v2;
  if ( v2 )
  {
    v26 = 0;
    v25 = 0;
    if ( fread(&v25, 1u, 8u, v2) != 8 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v4 = _errno_location();
        v5 = strerror(*v4);
        snprintf(s, 0x800u, "read stage file failed! err:%s\n", v5);
        sub_3AF5C(3, s, 0, v6);
      }
LABEL_5:
      fclose(v3);
      return 0;
    }
    v15 = v26;
    dword_B032C[0] = v25;
    dword_B032C[v25] = (int)sub_3F144;
    *a1 = v15;
    if ( v15 >= dword_B032C[0] )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "reach max stage ");
        sub_3AF5C(3, s, 0, *(int *)"age ");
      }
      goto LABEL_5;
    }
    v20 = v15 + 1;
    v26 = v20;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "counter: %d", v20);
      sub_3AF5C(3, s, 0, v24);
      v20 = v26;
    }
    *a1 = v20;
    fseek(v3, 0, 0);
    if ( fwrite(&v25, 1u, 8u, v3) != 8 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v21 = _errno_location();
        v22 = strerror(*v21);
        snprintf(s, 0x800u, "can not write,err:%s", v22);
        sub_3AF5C(3, s, 0, v23);
      }
      goto LABEL_5;
    }
    fflush(v3);
    fclose(v3);
    sleep(1u);
    return 1;
  }
  else
  {
    v8 = dword_4B6CC8;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "do_stage g_frequency:%d", dword_4B6CC8);
      sub_3AF5C(3, s, 0, v19);
      v8 = dword_4B6CC8;
    }
    if ( v8 == 540 )
      return 0;
    v9 = (v8 - 540) / 0x19u;
    dword_B032C[0] = v9 + 1;
    dword_AFE58[v9 + 310] = (int)sub_3F144;
    v10 = fopen("/config/leveldown", "w");
    if ( v10 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "counter init to 1");
        sub_3AF5C(3, s, 0, *(int *)" to 1");
      }
      v11 = dword_B032C[0];
      *a1 = 1;
      v25 = v11;
      v26 = 1;
      if ( fwrite(&v25, 1u, 8u, v10) == 8 )
      {
        fflush(v10);
        fclose(v10);
        sleep(1u);
        return 1;
      }
      else
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          v12 = _errno_location();
          v13 = strerror(*v12);
          snprintf(s, 0x800u, "can not write,err:%s", v13);
          sub_3AF5C(3, s, 0, v14);
        }
        fclose(v10);
        return 0;
      }
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      v16 = _errno_location();
      v17 = strerror(*v16);
      snprintf(s, 0x800u, "can not open leveldown file, err:%s", v17);
      sub_3AF5C(3, s, 0, v18);
      return 0;
    }
  }
}
