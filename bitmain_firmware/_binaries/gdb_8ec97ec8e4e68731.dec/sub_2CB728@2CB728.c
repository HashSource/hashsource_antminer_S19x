int __fastcall sub_2CB728(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v7; // r1
  int v8; // r10
  unsigned int v9; // lr
  _DWORD *v10; // r12
  unsigned int v11; // r1
  int v12; // r4
  int v13; // r9
  int v14; // t1
  int v15; // r8
  int v16; // r0
  int v17; // r11
  unsigned int v18; // r0
  int v19; // r11
  int v20; // r10
  int v21; // r9
  int v22; // r8
  int v24; // [sp+0h] [bp-Ch]

  if ( ((*(_DWORD *)(a1 + 40) >> 5) & 0x42) != 0 )
  {
    v7 = *(_DWORD *)(a3 + 40);
    if ( v7 )
    {
      v8 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 9);
      v9 = a4 + v8 * 12 * sub_347418(*(_DWORD *)(a3 + 24), v7);
      if ( a4 < v9 )
      {
        v10 = (_DWORD *)(a5 - 4);
        v11 = a4;
        v24 = v8;
        v12 = 12 * v8;
        do
        {
          while ( 1 )
          {
            v14 = v10[1];
            ++v10;
            v13 = v14;
            if ( v14 )
            {
              if ( (*(_BYTE *)(v13 + 51) & 0xA) == 8 && (unsigned int)*(unsigned __int8 *)(v13 + 12) - 3 <= 1 )
              {
                v15 = *(_DWORD *)(v13 + 20);
                v16 = *(_DWORD *)(v15 + 60);
                if ( v16 )
                  break;
              }
            }
            v11 += v12;
            if ( v9 <= v11 )
              return sub_2E2B8C(a1, a2);
          }
          if ( v24 )
          {
            v17 = *(_DWORD *)(v16 + 136);
            v18 = v11;
            v11 += v12;
            v19 = v17 << 8;
            v20 = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v15 + 56);
            do
            {
              v21 = *(unsigned __int8 *)(v18 + 4);
              v18 += 12;
              v22 = *(_DWORD *)(v18 - 4) + v20;
              *(_DWORD *)(v18 - 8) = v21 + v19;
              *(_DWORD *)(v18 - 4) = v22;
            }
            while ( v18 != v11 );
          }
          else
          {
            v11 += v12;
          }
          *v10 = 0;
        }
        while ( v9 > v11 );
      }
    }
  }
  return sub_2E2B8C(a1, a2);
}
