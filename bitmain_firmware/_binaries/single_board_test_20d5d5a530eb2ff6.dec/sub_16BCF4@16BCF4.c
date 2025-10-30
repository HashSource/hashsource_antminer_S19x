_DWORD *__fastcall sub_16BCF4(const char *a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r0
  char *v9; // r5
  unsigned int v10; // r8
  int v11; // r4
  int v12; // r0
  int v13; // r5
  bool v14; // r3
  int v16; // r7
  _DWORD *v17; // r0
  _DWORD *v18; // r4
  _BOOL4 v20; // r0
  _DWORD v22[2]; // [sp+10h] [bp-10Ch]
  char v23[260]; // [sp+18h] [bp-104h] BYREF

  v22[0] = "file";
  sub_E9F28(v23, a1, 0x100u);
  v8 = strchr(v23, 58);
  if ( v8 && (v9 = v8, *v8 = 0, strcasecmp(v23, "file")) )
  {
    v20 = strncmp(v9 + 1, "//", 2u) != 0;
    v22[v20] = v23;
    v10 = v20 + 1;
    sub_D1260();
  }
  else
  {
    v10 = 1;
    sub_D1260();
  }
  v11 = 0;
  do
  {
    v12 = ((int (__fastcall *)(_DWORD))loc_10C35C)(v22[v11]);
    v13 = v12;
    if ( v12 )
    {
      v12 = (*(int (__fastcall **)(int, const char *, int, int))(v12 + 8))(v12, a1, a2, a3);
      v14 = v12 == 0;
    }
    else
    {
      v14 = 1;
    }
  }
  while ( ++v11 < v10 && v14 );
  v16 = v12;
  if ( v12 )
  {
    v17 = sub_E0740((void *)0x20);
    v18 = v17;
    if ( v17 )
    {
      *v17 = v13;
      v17[1] = v16;
      v17[2] = a2;
      v17[3] = a3;
      v17[4] = a4;
      v17[5] = a5;
      sub_D128C();
      return v18;
    }
    else
    {
      sub_D0048(44, 114, 65, (int)"crypto/store/store_lib.c", 84);
      sub_D1328();
      (*(void (__fastcall **)(int))(v13 + 36))(v16);
      return 0;
    }
  }
  else
  {
    sub_D1328();
    return 0;
  }
}
