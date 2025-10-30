int __fastcall sub_109F10(int a1, _DWORD *a2, int a3, int a4, unsigned __int64 a5, unsigned __int64 *a6)
{
  _DWORD *v6; // r5
  int v8; // r11
  _DWORD *v9; // r4
  int v10; // r3
  int v11; // r5
  int v12; // r0
  unsigned int v13; // r3
  _DWORD *v14; // r3
  int v15; // r3
  _DWORD *v16; // r10
  _DWORD *v17; // r3
  bool v18; // zf
  int v19; // r6
  int v20; // r8
  int v21; // r7
  int v22; // r0
  unsigned int v23; // r3
  int v24; // r3
  _DWORD *v25; // r1
  int v26; // r0
  _DWORD *v28; // r2
  int v29; // r1
  int v30; // r2
  unsigned __int64 v31; // [sp+18h] [bp-1Ch]

  v6 = a2 + 5;
  if ( sub_98F78(&dword_4878EC, a2 + 5) )
  {
    if ( !a5 )
      return sub_22F4D8(a1, a4);
  }
  else
  {
    sub_109DD0(a2);
    v29 = dword_4878F0;
    v30 = dword_4878F4;
    *v6 = dword_4878EC;
    v6[1] = v29;
    v6[2] = v30;
    if ( !a5 )
      return sub_22F4D8(a1, a4);
  }
  v8 = a4 - 1;
  v31 = 0;
  while ( 1 )
  {
    v11 = a3 + v31;
    v12 = sub_326F3C(*a2, -a2[4] & (a3 + v31));
    if ( v12 )
    {
      v9 = *(_DWORD **)(v12 + 4);
      ++v9[3];
LABEL_5:
      v10 = a2[4];
      goto LABEL_6;
    }
    v13 = a2[3];
    if ( v13 < dword_46D440 )
    {
      v9 = (_DWORD *)a2[2];
      if ( v9 )
      {
        v28 = (_DWORD *)v9[1];
        if ( v9 == v28 )
        {
          a2[2] = 0;
LABEL_39:
          a2[3] = v13 + 1;
          goto LABEL_14;
        }
        *v28 = *v9;
        *(_DWORD *)(*v9 + 4) = v9[1];
        if ( v9 == (_DWORD *)a2[2] )
        {
          v13 = a2[3];
          a2[2] = v9[1];
          goto LABEL_39;
        }
      }
      else
      {
        v9 = sub_93028(a2[4] + 16);
      }
      v13 = a2[3];
      goto LABEL_39;
    }
    v9 = (_DWORD *)a2[1];
    v14 = (_DWORD *)v9[1];
    if ( v9 == v14 )
    {
      a2[1] = 0;
    }
    else
    {
      *v14 = *v9;
      *(_DWORD *)(*v9 + 4) = v9[1];
      if ( v9 == (_DWORD *)a2[1] )
        a2[1] = v9[1];
    }
    sub_326E94(*a2, v9[2]);
LABEL_14:
    v15 = a2[4];
    v9[3] = 0;
    v16 = v9 + 4;
    v9[2] = -v15 & v11;
    v17 = (_DWORD *)a2[1];
    v18 = v17 == 0;
    if ( v17 )
    {
      v9[1] = v17;
      v17 = (_DWORD *)a2[1];
    }
    else
    {
      v9[1] = v9;
      *v9 = v9;
    }
    if ( v18 )
      a2[1] = v9;
    else
      v17 = (_DWORD *)*v17;
    if ( !v18 )
    {
      *v9 = v17;
      v17[1] = v9;
      *(_DWORD *)a2[1] = v9;
    }
    sub_326D80(*a2);
    v19 = a2[4];
    v20 = v9[2];
    v10 = v19;
    if ( v19 > 0 )
      break;
LABEL_6:
    ++v31;
    *(_BYTE *)++v8 = *((_BYTE *)v9 + (v11 & (v10 - 1)) + 16);
    if ( a5 <= v31 )
      goto LABEL_33;
  }
  while ( 1 )
  {
    v21 = v19;
    v22 = sub_1AED14(v20);
    v23 = *(_DWORD *)(v22 + 4);
    if ( v23 )
    {
      if ( v23 <= v19 + v20 )
        v21 = v23 - v20;
    }
    v24 = *(_DWORD *)(v22 + 16);
    v25 = v16;
    v26 = v20;
    if ( v24 != 3 )
      break;
    v20 += v21;
    v16 = (_DWORD *)((char *)v16 + v21);
    v19 -= v21;
LABEL_24:
    if ( v19 <= 0 )
      goto LABEL_5;
  }
  v20 += v21;
  v16 = (_DWORD *)((char *)v16 + v21);
  v19 -= v21;
  if ( !sub_230238(v26, v25, v21) )
    goto LABEL_24;
  sub_109978(a2, v11);
  if ( !v31 )
    return sub_22F4D8(a1, a4);
LABEL_33:
  *a6 = v31;
  return 1;
}
