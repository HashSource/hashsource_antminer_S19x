int __fastcall sub_3EC48(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r3
  int v10; // r0
  int v11; // [sp+Ch] [bp-10h] BYREF
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v11 = a2;
  v12 = a3;
  v13 = a4;
  v6 = sub_23192C(a1);
  if ( sub_98F78(&v11, &dword_46BBCC) )
  {
    v7 = ps_getpid_0(&dword_4878EC);
    v8 = (_DWORD *)dword_471BF4;
    if ( !dword_471BF4 )
      return (*(int (__fastcall **)(int, int, int, int, int, int))(v6 + 48))(v6, v11, v12, v13, a5, a6);
    if ( v7 != *(_DWORD *)(dword_471BF4 + 4) )
    {
      do
      {
        v8 = (_DWORD *)*v8;
        if ( !v8 )
          return (*(int (__fastcall **)(int, int, int, int, int, int))(v6 + 48))(v6, v11, v12, v13, a5, a6);
      }
      while ( v7 != v8[1] );
    }
LABEL_6:
    v8[8] = 0;
    return (*(int (__fastcall **)(int, int, int, int, int, int))(v6 + 48))(v6, v11, v12, v13, a5, a6);
  }
  v10 = ps_getpid_0(&v11);
  v8 = (_DWORD *)dword_471BF4;
  if ( !dword_471BF4 )
    return (*(int (__fastcall **)(int, int, int, int, int, int))(v6 + 48))(v6, v11, v12, v13, a5, a6);
  if ( *(_DWORD *)(dword_471BF4 + 4) == v10 )
    goto LABEL_6;
  while ( 1 )
  {
    v8 = (_DWORD *)*v8;
    if ( !v8 )
      return (*(int (__fastcall **)(int, int, int, int, int, int))(v6 + 48))(v6, v11, v12, v13, a5, a6);
    if ( v10 == v8[1] )
      goto LABEL_6;
  }
}
