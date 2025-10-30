int __fastcall sub_B3ACC(int a1, int a2, int a3, unsigned int a4, int a5, int a6, unsigned int *a7, unsigned int *a8)
{
  int v10; // r0
  int result; // r0
  unsigned int v12; // r8
  int v13; // r9
  unsigned int v14; // r3
  unsigned int v15; // r4
  int v16; // r6
  unsigned int v17; // r12
  unsigned int v18; // r3
  unsigned int v19; // r10
  unsigned int v20; // r7
  int v21; // r0
  int v22; // r8
  int v23; // r0
  int v24; // r0
  int v25; // r4
  int v26; // r0
  bool v27; // zf
  bool v28; // zf
  unsigned int v29; // [sp+Ch] [bp-38h]
  int v30; // [sp+10h] [bp-34h]
  unsigned int v31; // [sp+14h] [bp-30h]
  int v33; // [sp+1Ch] [bp-28h]
  unsigned int v34; // [sp+24h] [bp-20h]

  v10 = sub_170040(a2);
  result = ((int (__fastcall *)(int))loc_165BB8)(v10);
  if ( !a4 )
    return sub_25A6BC("\"\"", a1);
  v12 = *a7;
  if ( *a7 )
  {
    v13 = result;
    v33 = 0;
    sub_258BD4(result);
    v12 = 0;
    v31 = 0;
LABEL_4:
    v14 = v12 + 1;
    v34 = v12 + 1;
    if ( a4 > v12 + 1 )
    {
LABEL_5:
      v15 = v14;
      v16 = a3 + a6 * v14;
      v30 = a3 + a6 * v12;
      v17 = v14 - v12;
      v18 = a4;
      v19 = v12;
      while ( 1 )
      {
        v21 = v16;
        v20 = v17;
        if ( a6 == 1 )
        {
          ++v16;
          if ( *(unsigned __int8 *)(a3 + v19) != *(unsigned __int8 *)(a3 + v15) )
            goto LABEL_10;
        }
        else
        {
          v29 = v18;
          v16 += a6;
          v22 = sub_15C250(v21, a6, v13);
          v23 = sub_15C250(v30, a6, v13);
          v18 = v29;
          if ( v23 != v22 )
          {
LABEL_10:
            v12 = v19;
            a4 = v18;
            goto LABEL_11;
          }
        }
        v20 = ++v15 - v19;
        v17 = v15 - v19;
        if ( v18 <= v15 )
          goto LABEL_10;
      }
    }
    while ( 1 )
    {
      v15 = v34;
      v20 = 1;
LABEL_11:
      if ( *a8 >= v20 )
      {
        if ( !v33 )
          sub_25A6BC("\"", a1);
        if ( a6 == 1 )
          v26 = *(unsigned __int8 *)(a3 + v12);
        else
          v26 = sub_15C250(a3 + v12 * a6, a6, v13);
        v25 = 0;
        v12 = v34;
        ++v31;
        result = sub_B3A48(v26, a2, a1, 34);
        v33 = 1;
        if ( a4 <= v34 )
        {
LABEL_26:
          if ( !v33 )
            goto LABEL_27;
          goto LABEL_36;
        }
      }
      else
      {
        if ( v33 )
          sub_25A6BC("\", ", a1);
        sub_25A6BC(&word_3DB410, a1);
        if ( a6 == 1 )
          v24 = *(unsigned __int8 *)(a3 + v12);
        else
          v24 = sub_15C250(a3 + v12 * a6, a6, v13);
        v12 = v15;
        v25 = 1;
        sub_B3A48(v24, a2, a1, 39);
        sub_25A6BC(&word_3DB410, a1);
        result = sub_25A418(a1, " <repeats %u times>", v20);
        v33 = 0;
        v31 += *a8;
        if ( a4 <= v12 )
          goto LABEL_26;
      }
      if ( *a7 <= v31 )
        break;
      sub_258BD4(result);
      if ( !v25 )
        goto LABEL_4;
      sub_25A6BC(", ", a1);
      v14 = v12 + 1;
      v34 = v12 + 1;
      if ( a4 > v12 + 1 )
        goto LABEL_5;
    }
    if ( !v33 )
      return sub_25A6BC("...", a1);
LABEL_36:
    result = sub_25A6BC("\"", a1);
    v28 = a4 == v12;
    if ( a4 <= v12 )
      v28 = a5 == 0;
    if ( !v28 )
      return sub_25A6BC("...", a1);
  }
  else
  {
LABEL_27:
    v27 = a4 == v12;
    if ( a4 <= v12 )
      v27 = a5 == 0;
    if ( !v27 )
      return sub_25A6BC("...", a1);
  }
  return result;
}
