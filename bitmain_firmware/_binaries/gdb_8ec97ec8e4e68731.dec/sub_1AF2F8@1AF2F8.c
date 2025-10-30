int __fastcall sub_1AF2F8(_BYTE *a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v6; // r1
  int v7; // r2
  int *v8; // r9
  int v9; // r10
  _DWORD *v10; // r3
  int v11; // r8
  _DWORD *v12; // r12
  _DWORD *v13; // r3
  int *v14; // r11
  int v15; // r3
  int *v16; // r4
  _DWORD *v17; // lr
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int *v22; // r4
  int *v23; // lr
  int v24; // r0
  int v25; // r1
  int v26; // r3
  int v27; // r3
  int v28; // r10
  _DWORD *v29; // r12
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int *v34; // r4
  int *v35; // lr
  int v36; // r0
  int v37; // r1
  int v38; // r3
  _BYTE v39[28]; // [sp+0h] [bp-1Ch] BYREF

  v3 = sub_1AF0D0(a2);
  sub_234884(v3);
  if ( a1 && *a1 )
  {
    v4 = sub_5ADF4((int)v39, (int)a1);
    while ( 1 )
    {
      if ( v39[0] )
        return sub_243C34(v4);
      v4 = sub_5AE34((int)v39, v6, v7);
      v8 = off_46D9C4;
      v9 = v4;
      if ( !off_46D9C4 )
        goto LABEL_28;
      v10 = (_DWORD *)*off_46D9C4;
      v11 = off_46D9C4[1];
      v6 = -858993459 * ((v11 - *off_46D9C4) >> 3);
      v7 = v6 >> 2;
      if ( v6 >> 2 > 0 )
      {
        v6 = v10[2];
        if ( v4 == v6 )
        {
          v12 = (_DWORD *)*off_46D9C4;
        }
        else
        {
          v6 = v10[12];
          if ( v4 == v6 )
          {
            v12 = v10 + 10;
          }
          else
          {
            v6 = v10[22];
            if ( v4 == v6 )
            {
              v12 = v10 + 20;
            }
            else
            {
              v6 = v10[32];
              if ( v4 == v6 )
              {
                v12 = v10 + 30;
              }
              else
              {
                v7 = (int)&v10[40 * v7];
                while ( 1 )
                {
                  v12 = v10 + 40;
                  if ( v10 + 40 == (_DWORD *)v7 )
                  {
                    v7 = (v11 - v7) >> 3;
                    v6 = -858993459 * v7;
                    goto LABEL_25;
                  }
                  v6 = v10[42];
                  if ( v4 == v6 )
                    goto LABEL_30;
                  v6 = v10[52];
                  if ( v4 == v6 )
                  {
                    v12 = v10 + 50;
                    goto LABEL_30;
                  }
                  v6 = v10[62];
                  if ( v4 == v6 )
                  {
                    v12 = v10 + 60;
                    goto LABEL_30;
                  }
                  v6 = v10[72];
                  if ( v4 == v6 )
                    break;
                  v10 += 40;
                }
                v12 = v10 + 70;
              }
            }
          }
        }
        goto LABEL_30;
      }
      v12 = (_DWORD *)*off_46D9C4;
LABEL_25:
      if ( v6 == 2 )
        goto LABEL_44;
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          goto LABEL_28;
LABEL_46:
        if ( v4 != v12[2] )
          goto LABEL_28;
        goto LABEL_30;
      }
      if ( v4 != v12[2] )
        break;
LABEL_30:
      if ( (_DWORD *)v11 == v12 )
        goto LABEL_28;
      v13 = v12 + 10;
      v14 = v12 + 10;
      if ( (_DWORD *)v11 == v12 + 10 )
      {
LABEL_37:
        if ( (_DWORD *)v11 != v13 )
        {
          v27 = v11 - (_DWORD)v13;
          v28 = -858993459 * (v27 >> 3);
          if ( v27 > 0 )
          {
            v29 = v12 + 20;
            do
            {
              v30 = *(v29 - 10);
              v31 = *(v29 - 9);
              v32 = *(v29 - 8);
              v33 = *(v29 - 7);
              v34 = v29 - 6;
              v35 = v29 - 20;
              --v28;
              v29 += 10;
              *v35 = v30;
              v35[1] = v31;
              v35[2] = v32;
              v35[3] = v33;
              v35 += 4;
              v36 = *v34;
              v37 = v34[1];
              v7 = v34[2];
              v38 = v34[3];
              v34 += 4;
              *v35 = v36;
              v35[1] = v37;
              v35[2] = v7;
              v35[3] = v38;
              v35 += 4;
              v4 = *v34;
              v6 = v34[1];
              *v35 = *v34;
              v35[1] = v6;
            }
            while ( v28 );
          }
        }
        v8[1] = v11 - 40;
      }
      else
      {
        do
        {
          v15 = v14[2];
          v16 = v14;
          v17 = v12;
          v14 += 10;
          if ( v9 != v15 )
          {
            v18 = *v16;
            v19 = v16[1];
            v20 = v16[2];
            v21 = v16[3];
            v22 = v16 + 4;
            v12 += 10;
            *v17 = v18;
            v17[1] = v19;
            v17[2] = v20;
            v17[3] = v21;
            v23 = v17 + 4;
            v24 = *v22;
            v25 = v22[1];
            v7 = v22[2];
            v26 = v22[3];
            v22 += 4;
            *v23 = v24;
            v23[1] = v25;
            v23[2] = v7;
            v23[3] = v26;
            v23 += 4;
            v4 = *v22;
            v6 = v22[1];
            *v23 = *v22;
            v23[1] = v6;
          }
        }
        while ( (int *)v11 != v14 );
        if ( (_DWORD *)v11 != v12 )
        {
          v13 = v12 + 10;
          goto LABEL_37;
        }
LABEL_28:
        v4 = sub_259858("No memory region number %d.\n", v9);
      }
    }
    v12 += 10;
LABEL_44:
    if ( v4 != v12[2] )
    {
      v12 += 10;
      goto LABEL_46;
    }
    goto LABEL_30;
  }
  v4 = sub_25A3E4("Delete all memory regions? ");
  if ( v4 )
    dword_487B38 = dword_487B34;
  return sub_243C34(v4);
}
