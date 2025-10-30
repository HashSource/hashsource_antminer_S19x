int __fastcall sub_2A4BC0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r4
  size_t v5; // r5
  _BYTE *v6; // r0
  int v7; // r3
  int v8; // r1
  char v9; // r2
  bool v10; // zf
  int v11; // t1
  int v12; // lr
  char *v13; // r0

  v4 = *(_DWORD **)(a1 + 148);
  v5 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 26);
  *a3 = 0;
  *a2 = 0;
  for ( *a4 = 0; v4; v4 = (_DWORD *)v4[36] )
  {
    v6 = (_BYTE *)sub_3245A4(*v4);
    v7 = (unsigned __int8)*v6;
    if ( *v6 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = v7 == 32;
        v11 = (unsigned __int8)*++v6;
        v7 = v11;
        if ( v10 )
          v9 = 1;
        if ( !v7 )
          break;
        ++v8;
      }
      if ( v5 < v8 + 1 )
        v9 |= 1u;
      if ( (v9 & 1) != 0 )
      {
        v12 = v4[34];
        v13 = *(char **)v12;
        *(_DWORD *)(v12 + 8) = (v8 + 4) & 0xFFFFFFFC;
        sub_2A3308(v13, v5, "#1/%lu");
      }
    }
  }
  return 1;
}
