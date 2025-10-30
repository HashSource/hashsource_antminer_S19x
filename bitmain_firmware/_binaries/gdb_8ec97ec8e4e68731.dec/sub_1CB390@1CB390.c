void __fastcall sub_1CB390(int a1)
{
  _DWORD *v1; // r0
  char *v2; // r6
  char *v3; // r4
  _DWORD *v4; // r0
  bool v5; // zf
  int v6; // r0
  int (*v7)(void); // r3
  int v8; // r0
  int (*v9)(void); // r3
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  void *ptr; // [sp+Ch] [bp-44h] BYREF
  char *v13; // [sp+10h] [bp-40h]
  void *v14[2]; // [sp+18h] [bp-38h] BYREF
  _BYTE v15[16]; // [sp+20h] [bp-30h] BYREF
  void *v16[2]; // [sp+30h] [bp-20h] BYREF
  _BYTE v17[16]; // [sp+38h] [bp-18h] BYREF
  void *v18[2]; // [sp+48h] [bp-8h] BYREF
  _BYTE v19[20]; // [sp+50h] [bp+0h] BYREF

  v14[0] = v15;
  v14[1] = 0;
  v15[0] = 0;
  v16[1] = 0;
  v17[0] = 0;
  v18[1] = 0;
  v19[0] = 0;
  v16[0] = v17;
  v18[0] = v19;
  sub_1CA1C0(a1, v14, v16, v18);
  v1 = sub_1CAE50(&ptr, (int)v18, (int)v14, (int)v16, &off_3CD45C);
  v2 = v13;
  if ( ptr == v13 )
  {
    v11 = (_DWORD *)sub_242FDC(v1);
    sub_25738C(*v11, "No probes matched.\n");
  }
  else
  {
    v3 = (char *)ptr + 8;
    do
    {
      while ( 1 )
      {
        v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v3 - 2) + 36))(*((_DWORD *)v3 - 2));
        v7 = *(int (**)(void))(*(_DWORD *)v6 + 12);
        if ( v7 != sub_6E020 )
        {
          v6 = v7();
          if ( v6 )
            break;
        }
        v4 = (_DWORD *)sub_242FDC(v6);
        sub_25738C(
          *v4,
          "Probe %s:%s cannot be enabled.\n",
          *(const char **)(*((_DWORD *)v3 - 2) + 28),
          *(const char **)(*((_DWORD *)v3 - 2) + 4));
        v5 = v2 == v3;
        v3 += 8;
        if ( v5 )
          goto LABEL_10;
      }
      v8 = *((_DWORD *)v3 - 2);
      v9 = *(int (**)(void))(*(_DWORD *)v8 + 44);
      if ( (char *)v9 != (char *)nullsub_9 )
        v8 = v9();
      v10 = (_DWORD *)sub_242FDC(v8);
      sub_25738C(
        *v10,
        "Probe %s:%s enabled.\n",
        *(const char **)(*((_DWORD *)v3 - 2) + 28),
        *(const char **)(*((_DWORD *)v3 - 2) + 4));
      v5 = v2 == v3;
      v3 += 8;
    }
    while ( !v5 );
  }
LABEL_10:
  if ( ptr )
    sub_339E64(ptr);
  if ( v18[0] != v19 )
    sub_339E64(v18[0]);
  if ( v16[0] != v17 )
    sub_339E64(v16[0]);
  if ( v14[0] != v15 )
    sub_339E64(v14[0]);
}
