int __fastcall sub_2FBB3C(int a1, int a2)
{
  int v3; // r6
  FILE *v5; // r0
  int v6; // r0
  int v8; // r1
  FILE *v9; // r0
  __int64 v10; // r2
  _QWORD v11[13]; // [sp+0h] [bp-68h] BYREF

  v3 = *(_DWORD *)(a1 + 140);
  if ( !v3 || (*(_BYTE *)(v3 + 44) & 1) != 0 )
  {
    v9 = *(FILE **)(a1 + 8);
    *(_DWORD *)a2 = *(_DWORD *)a1;
    if ( !v9 )
    {
      if ( !sub_2A8FD0((int *)a1) )
        return 0;
      v9 = *(FILE **)(a1 + 8);
    }
    v6 = fileno(v9);
    *(_DWORD *)(a2 + 4) = v6;
  }
  else
  {
    v5 = *(FILE **)(v3 + 8);
    *(_DWORD *)a2 = *(_DWORD *)v3;
    if ( !v5 )
    {
      if ( !sub_2A8FD0((int *)v3) )
        return 0;
      v5 = *(FILE **)(v3 + 8);
    }
    v6 = fileno(v5);
    *(_DWORD *)(a2 + 4) = v6;
    if ( v3 != a1 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 136) + 4);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 56);
      *(_DWORD *)(a2 + 20) = 0;
      *(_DWORD *)(a2 + 16) = v8;
      return 1;
    }
  }
  if ( _fxstat64(3, v6, v11) )
    return 0;
  v10 = v11[6];
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v10;
  return 1;
}
