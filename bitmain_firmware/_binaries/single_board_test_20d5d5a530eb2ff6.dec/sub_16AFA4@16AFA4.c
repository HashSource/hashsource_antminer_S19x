void *__fastcall sub_16AFA4(int a1, char *s1)
{
  char *v3; // r7
  unsigned int v4; // r9
  int v5; // r0
  char *v6; // r4
  unsigned int v7; // r6
  void *v8; // r5
  void *v9; // r0
  _DWORD *v10; // r7
  int v11; // r0
  int v12; // r0
  int *v14; // r0
  char *v15; // r0
  int v16; // r0
  int v17; // r4
  int *v18; // r0
  int v19; // r3
  int *v20; // r7
  int v21; // r3
  int v22; // r0
  char *v23; // [sp+8h] [bp-1068h] BYREF
  char v24; // [sp+Ch] [bp-1064h]
  char *v25; // [sp+10h] [bp-1060h]
  struct stat stat_buf; // [sp+18h] [bp-1058h] BYREF
  char s[4096]; // [sp+70h] [bp-1000h] BYREF

  v23 = s1;
  v24 &= ~1u;
  if ( !strncasecmp(s1, "file:", 5u) )
  {
    v3 = s1 + 5;
    if ( !strncmp(s1 + 5, "//", 2u) )
    {
      v3 = s1 + 7;
      v5 = strncasecmp(s1 + 7, "localhost/", 0xAu);
      if ( v5 )
      {
        if ( s1[7] != 47 )
        {
          sub_D0048(44, 120, 111, (int)"crypto/store/loader_file.c", 829);
          return 0;
        }
        v5 = 0;
        v4 = 1;
      }
      else
      {
        v3 = s1 + 16;
        v4 = 1;
      }
    }
    else
    {
      v4 = 2;
      v5 = 1;
    }
    (&v23)[2 * v5] = v3;
    v6 = v23;
    LOBYTE((&v23)[2 * v5 + 1]) |= 1u;
  }
  else
  {
    v6 = s1;
    v4 = 1;
  }
  v7 = 0;
  while ( 1 )
  {
    if ( ((int)(&v23)[2 * v7 + 1] & 1) != 0 && *v6 != 47 )
    {
      sub_D0048(44, 120, 108, (int)"crypto/store/loader_file.c", 858);
      sub_D1240(1, v6);
      return 0;
    }
    if ( _xstat(3, v6, &stat_buf) >= 0 )
      break;
    v14 = _errno_location();
    sub_D0048(2, 22, *v14, (int)"crypto/store/loader_file.c", 864);
    ++v7;
    sub_D1240(1, v6);
    if ( v7 >= v4 )
      return 0;
    v6 = v25;
  }
  if ( !v6 )
    return 0;
  sub_D00F0();
  v8 = sub_E0740((void *)0x30);
  if ( v8 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
    {
      v15 = sub_E9E3C(s1);
      *(_DWORD *)v8 = 2;
      *((_DWORD *)v8 + 5) = v15;
      if ( !v15 )
        goto LABEL_39;
      v16 = sub_E9D40((DIR ***)v8 + 3, v6);
      *((_DWORD *)v8 + 9) = v16;
      v17 = v16;
      v18 = _errno_location();
      v19 = *v18;
      v20 = v18;
      *((_DWORD *)v8 + 10) = *v18;
      if ( v17 )
        return v8;
      if ( !v19 )
      {
        *((_DWORD *)v8 + 4) = 1;
        return v8;
      }
      sub_D0048(44, 120, 2, (int)"crypto/store/loader_file.c", 900);
      v22 = *((_DWORD *)v8 + 10);
      *v20 = v22;
      if ( sub_EA12C(v22, s, 0x100u) )
        sub_D1240(1, s);
    }
    else
    {
      memset(s, 0, sizeof(s));
      v9 = sub_B6550();
      v10 = sub_B655C((int)v9);
      if ( v10 )
      {
        v11 = sub_B782C((int)v6, "rb");
        *((_DWORD *)v8 + 3) = v11;
        if ( v11 )
        {
          v12 = sub_B70C0((int)v10, v11);
          *((_DWORD *)v8 + 3) = v12;
          if ( sub_B6ECC(v12, 29, 4095, (int)s) > 0 )
          {
            s[4095] = 0;
            if ( strstr(s, "-----BEGIN ") )
              *(_DWORD *)v8 = 1;
          }
          return v8;
        }
      }
      sub_B717C((int)v10);
    }
    if ( *(_DWORD *)v8 != 2 )
    {
      v21 = *((_DWORD *)v8 + 4);
      if ( v21 )
      {
        (*(void (__fastcall **)(int))(v21 + 12))((int)v8 + 20);
        *((_DWORD *)v8 + 5) = 0;
        *((_DWORD *)v8 + 4) = 0;
      }
      goto LABEL_36;
    }
    v15 = (char *)*((_DWORD *)v8 + 5);
LABEL_39:
    CRYPTO_free(v15);
LABEL_36:
    CRYPTO_free(v8);
    return 0;
  }
  sub_D0048(44, 120, 65, (int)"crypto/store/loader_file.c", 879);
  return 0;
}
