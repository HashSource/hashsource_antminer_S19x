int __fastcall sub_11524C(int a1, int *a2, _DWORD *a3, int a4)
{
  int v7; // r1
  int v8; // r2
  int v9; // r3
  signed int v10; // r6
  int v11; // r11
  int v12; // r5
  int v13; // r0
  int v14; // r7
  int v15; // r4
  bool v16; // cc
  unsigned int v17; // r1
  _DWORD *v18; // r0
  int v20; // r0
  _DWORD v22[10]; // [sp+Ch] [bp-28h] BYREF

  if ( *(_DWORD *)(a1 + 24) )
  {
    if ( !sub_10C094(*(_DWORD *)(a1 + 24)) )
    {
      sub_10C554(*(pthread_rwlock_t **)(a1 + 132));
      sub_10C070(*(_DWORD *)(a1 + 24));
      sub_10C564(*(pthread_rwlock_t **)(a1 + 132));
    }
    v7 = a3[1];
    v8 = a3[2];
    v9 = a3[3];
    v22[0] = *a3;
    v22[1] = v7;
    v22[2] = v8;
    v22[3] = v9;
    v10 = sub_10BC4C(*(_DWORD *)(a1 + 24), (int)v22);
    if ( v10 >= 0 )
    {
      v11 = sub_10C010(*(_DWORD *)(a1 + 24));
      if ( v10 < v11 )
      {
        do
        {
          v12 = sub_10C01C(*(_DWORD **)(a1 + 24), v10);
          if ( sub_126528(v12, a3) )
            break;
          v13 = *(_DWORD *)(v12 + 24);
          if ( v13 )
          {
            v14 = a4;
            if ( !a4 )
            {
              v14 = sub_113BC4(a1);
              v13 = *(_DWORD *)(v12 + 24);
            }
            v15 = 0;
            while ( 1 )
            {
              v16 = v15 < sub_10C010(v13);
              v17 = v15++;
              if ( !v16 )
                break;
              v18 = (_DWORD *)sub_10C01C(*(_DWORD **)(v12 + 24), v17);
              if ( *v18 == 4 && !sub_10E6E0(v14, v18[1]) )
                goto LABEL_16;
              v13 = *(_DWORD *)(v12 + 24);
            }
          }
          else if ( !a4 || (v20 = sub_113BC4(a1), !sub_10E6E0(a4, v20)) )
          {
LABEL_16:
            if ( a2 )
              *a2 = v12;
            if ( *(_DWORD *)(v12 + 28) == 8 )
              return 2;
            else
              return 1;
          }
          ++v10;
        }
        while ( v11 != v10 );
      }
    }
  }
  return 0;
}
