int __fastcall sub_47AAC(unsigned int *a1)
{
  FILE *v2; // r0
  FILE *v3; // r4
  unsigned int v5; // r3
  FILE *v6; // r6
  int v7; // r12
  int *v8; // r0
  char *v9; // r0
  int v10; // r3
  int *v11; // r0
  char *v12; // r0
  int v13; // r3
  unsigned int v14; // r3
  unsigned int v15; // r3
  int *v16; // r0
  char *v17; // r0
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int *v21; // r0
  char *v22; // r0
  int v23; // r3
  int v24; // [sp+0h] [bp-808h] BYREF
  int v25; // [sp+4h] [bp-804h]
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = fopen("/config/leveldown", "r+");
  v3 = v2;
  if ( v2 )
  {
    v25 = 0;
    v24 = 0;
    if ( fread(&v24, 1u, 8u, v2) != 8 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v11 = _errno_location();
        v12 = strerror(*v11);
        snprintf(s, 0x800u, "read stage file failed! err:%s\n", v12);
        sub_3B6AC(3, s, 0, v13);
      }
LABEL_5:
      fclose(v3);
      return 0;
    }
    v14 = v25;
    dword_B3794[0] = v24;
    dword_B3794[v24] = (int)sub_40C80;
    *a1 = v14;
    if ( v14 >= dword_B3794[0] )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "reach max stage ");
        sub_3B6AC(3, s, 0, *(int *)"age ");
      }
      goto LABEL_5;
    }
    v15 = v14 + 1;
    v25 = v15;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "counter: %d", v15);
      sub_3B6AC(3, s, 0, v20);
      v15 = v25;
    }
    *a1 = v15;
    fseek(v3, 0, 0);
    if ( fwrite(&v24, 1u, 8u, v3) != 8 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v16 = _errno_location();
        v17 = strerror(*v16);
        snprintf(s, 0x800u, "can not write,err:%s", v17);
        sub_3B6AC(3, s, 0, v18);
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
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "do_stage g_frequency:%d", dword_534B54);
      sub_3B6AC(3, s, 0, v19);
    }
    if ( dword_534B54 == 540 )
      return 0;
    v5 = (dword_534B54 - 540) / 0x19u;
    dword_B3794[0] = v5 + 1;
    dword_B32C0[v5 + 310] = (int)sub_40C80;
    v6 = fopen("/config/leveldown", "w");
    if ( v6 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "counter init to 1");
        sub_3B6AC(3, s, 0, *(int *)" to 1");
      }
      v7 = dword_B3794[0];
      *a1 = 1;
      v24 = v7;
      v25 = 1;
      if ( fwrite(&v24, 1u, 8u, v6) == 8 )
      {
        fflush(v6);
        fclose(v6);
        sleep(1u);
        return 1;
      }
      else
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          v8 = _errno_location();
          v9 = strerror(*v8);
          snprintf(s, 0x800u, "can not write,err:%s", v9);
          sub_3B6AC(3, s, 0, v10);
        }
        fclose(v6);
        return 0;
      }
    }
    else
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 0;
      v21 = _errno_location();
      v22 = strerror(*v21);
      snprintf(s, 0x800u, "can not open leveldown file, err:%s", v22);
      sub_3B6AC(3, s, 0, v23);
      return 0;
    }
  }
}
