int __fastcall sub_30061C(int a1, int a2, int a3, unsigned int a4)
{
  _DWORD *v5; // r8
  unsigned int v6; // r4
  unsigned int v8; // r3
  int result; // r0
  _DWORD *v10; // r9
  unsigned int v11; // r6
  int v12; // r10
  _BYTE *v13; // r0
  int v14; // r12
  _BYTE *v15; // lr
  unsigned __int8 *v17; // r10
  _DWORD *v18; // r9
  int v19; // r3
  int v20; // r5
  unsigned __int8 *v21; // r10
  unsigned __int8 *v22; // r3
  unsigned __int8 *v23; // r1

  if ( !a3 )
    return a4;
  v5 = *(_DWORD **)a2;
  v6 = a4;
  v8 = *(_DWORD *)(*(_DWORD *)a2 + 40);
  if ( v8 <= v6 )
  {
    if ( v8 < v6 )
      sub_2A6A5C("%B: access beyond end of merged section (%Ld)", v5[37], v6);
    a4 = *(_DWORD *)(a3 + 16);
    if ( a4 )
      return v5[9];
    return a4;
  }
  v10 = *(_DWORD **)(a3 + 12);
  v11 = a3 + 20;
  v12 = v5[30];
  if ( v10[11] )
  {
    if ( v12 == 1 )
    {
      v21 = (unsigned __int8 *)(v11 + v6 - 1);
      if ( !__CFADD__(v11, v6 - 1) && *(_BYTE *)(v11 + v6 - 1) )
      {
        v22 = v21 - 1;
        v23 = (unsigned __int8 *)(a3 + 19);
        do
        {
          v21 = v22;
          if ( v23 == v22 )
            break;
        }
        while ( *v22-- );
      }
      v17 = v21 + 1;
    }
    else
    {
      v13 = (_BYTE *)(v11 - v12 + v12 * sub_347418(v6, v5[30]));
      if ( (unsigned int)v13 >= v11 )
      {
        while ( v12 )
        {
          v14 = (unsigned __int8)*v13;
          if ( !*v13 )
          {
            v15 = v13;
            while ( ++v14 != v12 )
            {
              if ( *++v15 )
                goto LABEL_20;
            }
            break;
          }
LABEL_20:
          v13 -= v12;
          if ( (unsigned int)v13 < v11 )
            break;
        }
      }
      v17 = &v13[v12];
    }
  }
  else
  {
    v17 = (unsigned __int8 *)(v11 + v12 * sub_347418(v6, v5[30]));
  }
  v18 = sub_2FF918(v10, v17, 0, 0);
  if ( !v18 )
  {
    v19 = *(_DWORD *)(a3 + 12);
    if ( !*(_DWORD *)(v19 + 44) )
      sub_2A6BF0((int)"merge.c", 908, (int)"_bfd_merged_section_offset");
    if ( *v17 )
      sub_2A6BF0((int)"merge.c", 912, (int)"_bfd_merged_section_offset");
    v18 = *(_DWORD **)(v19 + 32);
    if ( !v18 )
      sub_2A6BF0((int)"merge.c", 914, (int)"_bfd_merged_section_offset");
    v20 = v5[30];
    v17 = (unsigned __int8 *)(v11 + v20 + sub_347418(v6, v20) * v20 - v18[3]);
  }
  result = v11 + v6 - (_DWORD)v17 + v18[5];
  *(_DWORD *)a2 = *(_DWORD *)(v18[6] + 4);
  return result;
}
