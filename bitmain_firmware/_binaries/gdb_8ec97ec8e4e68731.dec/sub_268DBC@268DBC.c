int __fastcall sub_268DBC(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5, _DWORD *a6, int *a7)
{
  int v11; // r10
  void *v12; // r6
  int v13; // r0
  int v14; // r6
  int v16; // r7
  int v17; // r3
  unsigned int v18; // r8
  _BYTE *v19; // r0
  unsigned int v20; // r6
  int v21; // r10
  int v22; // r6
  char *v23; // r0
  unsigned __int8 *v24; // r11
  int v25; // r0
  unsigned __int8 *v26; // r7
  unsigned int v27; // r5
  unsigned int v28; // r0
  unsigned __int8 *v29; // r3
  _BYTE *v30; // r6
  unsigned __int8 *v31; // r11
  _DWORD *v32; // [sp+4h] [bp-18h]
  unsigned int v33; // [sp+8h] [bp-14h]
  unsigned int v34; // [sp+Ch] [bp-10h]
  int v35[2]; // [sp+14h] [bp-8h] BYREF

  *a6 = 0;
  v32 = sub_9253C((int)sub_2589B8, (int)a6);
  if ( a2 <= 0 )
  {
    if ( a2 == -1 )
    {
      v16 = 0;
      v33 = a4;
      v34 = a4 * a3;
      if ( a4 > 7 )
        v17 = 8;
      else
        v17 = a4;
      v18 = v17;
      while ( 1 )
      {
        sub_258BD4();
        v19 = (_BYTE *)*a6;
        v20 = v33 - v16;
        if ( v33 - v16 >= v18 )
          v20 = v18;
        v21 = v20 * a3;
        v22 = v16 + v20;
        if ( v19 )
          v23 = (char *)sub_93050(v19, v22 * a3);
        else
          v23 = (char *)sub_93028(v21);
        *a6 = v23;
        v24 = (unsigned __int8 *)&v23[v16 * a3];
        v25 = sub_265DBC(a1, (int)v24, v21, v35);
        v26 = &v24[a3 * sub_347690(v25)];
        if ( v24 < v26 )
        {
          v27 = a3 + a1 - (_DWORD)v24;
          do
          {
            v28 = sub_15C250(v24, a3, a5);
            v29 = &v24[v27];
            v24 += a3;
            if ( !v28 )
            {
              v30 = (_BYTE *)*a6;
              v35[0] = 0;
              v14 = v24 - v30;
              goto LABEL_5;
            }
          }
          while ( v26 > v24 );
          a1 = (unsigned int)v29;
        }
        if ( v35[0] )
          break;
        v16 = v22;
        v31 = &v24[-*a6];
        if ( (unsigned int)v31 >= v34 )
        {
          v14 = (int)v31;
          goto LABEL_5;
        }
      }
      v14 = (int)&v24[-*a6];
    }
    else
    {
      v14 = 0;
      v35[0] = 0;
      *a6 = sub_93028(1u);
    }
  }
  else
  {
    if ( a2 < a4 )
      a4 = a2;
    v11 = a3 * a4;
    v12 = sub_93028(v11);
    *a6 = v12;
    v13 = sub_265DBC(a1, (int)v12, v11, v35);
    v14 = (int)v12 + a3 * sub_347690(v13) - *a6;
  }
LABEL_5:
  *a7 = v14;
  sub_258BD4();
  sub_92640(v32);
  return v35[0];
}
