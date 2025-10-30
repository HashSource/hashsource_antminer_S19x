int __fastcall sub_112F1C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r4
  int v4; // r10
  int v6; // r4
  int v7; // r5
  __int64 v8; // r2
  int v9; // r0

  v3 = *(_DWORD *)(a1 + 68);
  v4 = a1;
  if ( v3 == *(_DWORD *)(a1 + 72) )
  {
    LODWORD(a1) = sub_114AD4(a1 + 64, *(_DWORD *)(a1 + 68));
    v6 = *(_DWORD *)(v4 + 68);
  }
  else
  {
    if ( v3 )
      LODWORD(a1) = memset(*(void **)(a1 + 68), 0, 0x28u);
    v6 = v3 + 40;
    *(_DWORD *)(v4 + 68) = v6;
  }
  v7 = *(_DWORD *)(v4 + 40);
  *(_QWORD *)(v6 - 16) = a2;
  *(_QWORD *)(v6 - 8) = a3;
  *(_DWORD *)(v6 - 40) = v7;
  if ( v7 == 3 )
  {
    v8 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v6 - 32) = *(_DWORD *)(v4 + 56);
    *(_QWORD *)(v6 - 24) = v8;
  }
  else if ( *(_DWORD *)(v4 + 4) == *(_DWORD *)(v4 + 8) )
  {
    *(_DWORD *)(v6 - 40) = 4;
    *(_DWORD *)(v4 + 40) = 4;
  }
  else if ( v7 )
  {
    if ( v7 == 5 )
    {
      *(_DWORD *)(v6 - 32) = *(_DWORD *)(v4 + 48);
      v9 = sub_112414(v4, 0);
      a1 = sub_26EB1C(v9);
      *(_QWORD *)(v6 - 24) = a1;
    }
    else
    {
      LODWORD(a1) = sub_112414(v4, 0);
      if ( v7 == 1 )
        LODWORD(a1) = sub_26EB1C(a1);
      *(_DWORD *)(v6 - 32) = a1;
    }
  }
  else
  {
    *(_DWORD *)(v6 - 32) = sub_11244C(v4, 0);
    LODWORD(a1) = sub_112528(v4, 0);
    *(_BYTE *)(v6 - 28) = a1;
  }
  return a1;
}
