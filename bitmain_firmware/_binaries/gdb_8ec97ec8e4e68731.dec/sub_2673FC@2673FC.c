void __fastcall sub_2673FC(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v8; // r4
  unsigned int v9; // r7
  char v10; // r5
  unsigned int v11; // r8
  int v12; // r7
  int v13; // r10
  unsigned int v14; // r1
  unsigned int v15; // t1
  int v16; // r11
  int v17; // r10
  int v18; // r2
  char v19; // r5
  int v20; // r7
  int v21; // r9
  int v22; // r10
  unsigned int v23; // r1
  unsigned int v24; // t1
  int v25; // r3
  int v26; // r10
  int v27; // r2
  int v28; // r11
  int v29; // r10
  int v30; // r3
  int v31; // r10
  unsigned int v32; // [sp+4h] [bp-10h]
  int v33; // [sp+8h] [bp-Ch]
  int v34; // [sp+8h] [bp-Ch]
  int v35; // [sp+Ch] [bp-8h]
  int v36; // [sp+Ch] [bp-8h]

  v8 = 8 * a3 % 3u;
  sub_25A6BC("0", a1);
  if ( a4 )
  {
    if ( __CFADD__(a2, a3 - 1) )
      return;
    v19 = 0;
    v20 = a2 + a3;
    v21 = 0;
    while ( 1 )
    {
      v24 = *(unsigned __int8 *)--v20;
      v23 = v24;
      if ( v8 == 1 )
        break;
      if ( v8 == 2 )
      {
        v25 = (v23 >> 3) & 7;
        v26 = (v23 >> 6) | (4 * v21);
        v21 = v23 & 7;
        if ( v26 )
          v19 |= 1u;
        if ( v19 )
        {
          v33 = (v23 >> 3) & 7;
          sub_25A418(a1, "%o", v26);
          v25 = v33;
        }
        else if ( !v25 )
        {
          if ( (v23 & 7) != 0 )
          {
            v21 = 0;
            sub_25A418(a1, "%o", v23 & 7);
            v19 = 1;
          }
          goto LABEL_27;
        }
        v19 = 1;
        sub_25A418(a1, "%o", v25);
        v27 = v21;
        v21 = 0;
        sub_25A418(a1, "%o", v27);
      }
      else
      {
        v22 = (v23 >> 2) & 7;
        v21 = v23 & 3;
        if ( v23 >> 5 )
          v19 |= 1u;
        if ( v19 )
        {
          sub_25A418(a1, "%o", v23 >> 5);
LABEL_25:
          sub_25A418(a1, "%o", v22);
          if ( v22 )
            v19 = 1;
          goto LABEL_27;
        }
        if ( v22 )
          goto LABEL_25;
      }
LABEL_27:
      v8 = (v8 + 1) % 3;
      if ( a2 == v20 )
        return;
    }
    v30 = (v23 >> 4) & 7;
    v34 = (v23 >> 1) & 7;
    v31 = (v23 >> 7) | (2 * v21);
    v21 = v23 & 1;
    if ( v31 )
      v19 |= 1u;
    if ( v19 )
    {
      v36 = (v23 >> 4) & 7;
      sub_25A418(a1, "%o", v31);
      v30 = v36;
    }
    else if ( !v30 )
    {
      if ( !v34 )
        goto LABEL_27;
      goto LABEL_45;
    }
    sub_25A418(a1, "%o", v30);
LABEL_45:
    v19 = 1;
    sub_25A418(a1, "%o", v34);
    goto LABEL_27;
  }
  v9 = a2 + a3;
  if ( a2 < v9 )
  {
    v10 = 0;
    v11 = a2 - 1;
    v32 = v9 - 1;
    v12 = 0;
    do
    {
      v15 = *(unsigned __int8 *)++v11;
      v14 = v15;
      if ( v8 == 1 )
      {
        v28 = (v14 >> 1) & 7;
        v29 = (v14 >> 7) | (2 * v12);
        v12 = v14 & 1;
        if ( v29 )
          v10 |= 1u;
        if ( v10 )
        {
          v35 = (v14 >> 4) & 7;
          sub_25A418(a1, "%o", v29);
          sub_25A418(a1, "%o", v35);
        }
        else if ( ((v14 >> 4) & 7) != 0 )
        {
          sub_25A418(a1, "%o", (v14 >> 4) & 7);
        }
        else if ( !v28 )
        {
          goto LABEL_10;
        }
        v10 = 1;
        sub_25A418(a1, "%o", v28);
      }
      else if ( v8 == 2 )
      {
        v16 = (v14 >> 3) & 7;
        v17 = (v14 >> 6) | (4 * v12);
        v12 = v14 & 7;
        if ( v17 )
          v10 |= 1u;
        if ( v10 )
        {
          sub_25A418(a1, "%o", v17);
        }
        else if ( !v16 )
        {
          if ( (v14 & 7) != 0 )
          {
            v12 = 0;
            sub_25A418(a1, "%o", v14 & 7);
            v10 = 1;
          }
          goto LABEL_10;
        }
        v10 = 1;
        sub_25A418(a1, "%o", v16);
        v18 = v12;
        v12 = 0;
        sub_25A418(a1, "%o", v18);
      }
      else
      {
        v13 = (v14 >> 2) & 7;
        v12 = v14 & 3;
        if ( v14 >> 5 )
          v10 |= 1u;
        if ( v10 )
        {
          sub_25A418(a1, "%o", v14 >> 5);
LABEL_8:
          sub_25A418(a1, "%o", v13);
          if ( v13 )
            v10 = 1;
          goto LABEL_10;
        }
        if ( v13 )
          goto LABEL_8;
      }
LABEL_10:
      v8 = (v8 + 1) % 3;
    }
    while ( v11 != v32 );
  }
}
