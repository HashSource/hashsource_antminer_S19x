void sub_214410()
{
  _DWORD *v0; // r11
  int *v1; // r2
  int v2; // r10
  int *i; // r4
  int v4; // r0
  _DWORD *v5; // r2
  int v6; // r5
  int v7; // r8
  int v8; // r6
  int v9; // r7
  _DWORD *v10; // r0
  int v11; // r8
  _DWORD *v12; // r0
  int v13; // r8
  _DWORD *v14; // r0
  int v15; // r5
  _DWORD *v16; // r0
  int v17; // [sp+4h] [bp-34h]

  if ( !dword_489690 )
    goto LABEL_16;
  v0 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v0 )
    goto LABEL_16;
  v1 = (int *)v0[43];
  v2 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      for ( i = (int *)v0[42]; v1 > i; v1 = (int *)v0[43] )
      {
        while ( !*i || !sub_2142D0(i) )
        {
          v1 = (int *)v0[43];
          i += 3;
          if ( v1 <= i )
            goto LABEL_10;
        }
        i += 3;
        v4 = sub_1B7250((int)v0);
        v5 = (_DWORD *)*(i - 3);
        v6 = v4;
        ++v2;
        v7 = v5[8];
        v8 = v5[7];
        v9 = v5[9];
        sub_259F10("Section %s, loaded at ", *v5);
        v17 = sub_25AC8C(v6, v7);
        v10 = (_DWORD *)sub_242F8C(v17);
        sub_25A6BC(v17, *v10);
        sub_259B34(" - ");
        v11 = sub_25AC8C(v6, v9 + v7);
        v12 = (_DWORD *)sub_242F8C(v11);
        sub_25A6BC(v11, *v12);
        sub_259F10(", mapped at ");
        v13 = sub_25AC8C(v6, v8);
        v14 = (_DWORD *)sub_242F8C(v13);
        sub_25A6BC(v13, *v14);
        sub_259B34(" - ");
        v15 = sub_25AC8C(v6, v9 + v8);
        v16 = (_DWORD *)sub_242F8C(v15);
        sub_25A6BC(v15, *v16);
        sub_259B34(&word_356638);
      }
LABEL_10:
      if ( v1 == i )
        break;
      v1 = (int *)v0[43];
      if ( v1 != i )
        goto LABEL_12;
    }
    v0 = (_DWORD *)*v0;
    if ( !v0 )
      break;
    v1 = (int *)v0[43];
  }
LABEL_12:
  if ( !v2 )
LABEL_16:
    sub_259F10("No sections are mapped.\n");
}
