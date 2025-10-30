int __fastcall sub_1B8630(unsigned int a1, int a2)
{
  unsigned int v3; // r4
  unsigned int v4; // r2
  unsigned int v6; // r4
  unsigned int v7; // r6
  int v8; // r2
  int v9; // r9
  int v10; // r1
  int v11; // r5
  int v12; // r2
  int v13; // r9
  int v14; // r5

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 168);
    v4 = *(_DWORD *)(a2 + 172);
    if ( v3 < v4 )
    {
      v6 = v3 + 12;
      do
      {
        v7 = v6;
        if ( *(_DWORD *)(v6 - 12) )
        {
          if ( !sub_2142A0(v6 - 12) || sub_2142D0(v6 - 12) )
          {
            v8 = *(_DWORD *)(v6 - 8);
            v9 = *(_DWORD *)(v8 + 144);
            v10 = *(_DWORD *)(v6 - 12);
            v11 = *(_DWORD *)(v10 + 28);
            if ( v11 + *(_DWORD *)(v9 + 4 * sub_162FDC(*(_DWORD *)(v8 + 36), v10)) <= a1 )
            {
              v12 = *(_DWORD *)(v6 - 8);
              v13 = *(_DWORD *)(v12 + 144);
              v14 = *(_DWORD *)(*(_DWORD *)(v6 - 12) + 28) + *(_DWORD *)(*(_DWORD *)(v6 - 12) + 36);
              if ( v14 + *(_DWORD *)(v13 + 4 * sub_162FDC(*(_DWORD *)(v12 + 36), *(_DWORD *)(v6 - 12))) > a1 )
                return 1;
            }
          }
          v4 = *(_DWORD *)(a2 + 172);
        }
        v6 += 12;
      }
      while ( v4 > v7 );
    }
  }
  return 0;
}
