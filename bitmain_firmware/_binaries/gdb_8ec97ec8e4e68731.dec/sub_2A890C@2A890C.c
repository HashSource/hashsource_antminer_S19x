int __fastcall sub_2A890C(int a1)
{
  int v1; // r3
  __int64 v3; // r0
  int v4; // lr
  int v5; // r4
  unsigned int v6; // r3
  unsigned int v7; // r2
  __int64 v8; // kr00_8

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    LODWORD(v3) = (*(int (**)(void))(v1 + 8))();
    v4 = *(_DWORD *)(a1 + 140);
    if ( !v4 || (*(_BYTE *)(v4 + 44) & 1) != 0 )
    {
      v8 = v3;
    }
    else
    {
      v5 = a1;
      do
      {
        v6 = *(_DWORD *)(v5 + 56);
        v7 = *(_DWORD *)(v5 + 60);
        v5 = v4;
        v8 = v3 - __PAIR64__(v7, v6);
        v3 -= __PAIR64__(v7, v6);
        v4 = *(_DWORD *)(v4 + 140);
      }
      while ( v4 && (*(_BYTE *)(v4 + 44) & 1) == 0 );
    }
  }
  else
  {
    LODWORD(v3) = 0;
    v8 = 0;
  }
  *(_QWORD *)(a1 + 24) = v8;
  return v3;
}
