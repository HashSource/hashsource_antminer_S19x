int __fastcall sub_ED45C(unsigned __int8 *a1, int a2, char a3)
{
  int v3; // r5
  int v5; // r4
  unsigned __int8 *v6; // r3
  unsigned int v7; // t1
  int result; // r0
  unsigned __int8 *v10; // r6
  int v11; // r1
  unsigned int v12; // r0
  bool v13; // zf
  int v14; // r5
  _BYTE *v15; // r6
  unsigned int v16; // t1
  bool v17; // zf
  unsigned __int8 *v18; // r8
  int v19; // r3
  bool v20; // zf
  _BYTE *v21; // r6

  v3 = a3 & 2;
  v5 = a2;
  if ( (a3 & 2) != 0 )
  {
    if ( a2 >= 0 )
    {
      v6 = &a1[a2];
      if ( a1[a2] <= 0x20u )
      {
        do
        {
          if ( v5-- == 0 )
            break;
          v7 = *--v6;
        }
        while ( v7 <= 0x20 );
      }
    }
    result = v5 + 2;
    v10 = &a1[v5 + 1];
    v11 = v5 + 2;
    goto LABEL_8;
  }
  if ( (a3 & 4) == 0 )
  {
    if ( a2 > 0 )
    {
      v12 = *a1;
      v13 = v12 == 13;
      if ( v12 != 13 )
        v13 = v12 == 10;
      v14 = v13;
      if ( !v13 )
      {
        v15 = a1;
        while ( 1 )
        {
          if ( sub_BDB10(v12, 64) )
            *v15 = 32;
          if ( v5 == v14 + 1 )
            break;
          v16 = (unsigned __int8)*++v15;
          v12 = v16;
          v17 = v16 == 13;
          if ( v16 != 13 )
            v17 = v12 == 10;
          if ( v17 )
          {
            *v15 = 10;
            a1[v14 + 2] = 0;
            return v14 + 2;
          }
          ++v14;
        }
LABEL_25:
        a1[v5] = 10;
        a1[v5 + 1] = 0;
        return v5 + 1;
      }
    }
LABEL_35:
    v11 = 1;
    v10 = a1;
    result = 1;
LABEL_8:
    *v10 = 10;
    a1[v11] = 0;
    return result;
  }
  if ( a2 <= 0 )
    goto LABEL_35;
  v18 = a1;
  while ( 1 )
  {
    v21 = v18;
    if ( !sub_BDB10(*v18, 1024) )
      break;
    v19 = *v18++;
    v20 = v19 == 10;
    if ( v19 != 10 )
      v20 = v19 == 13;
    if ( v20 )
      break;
    if ( v5 == ++v3 )
      goto LABEL_25;
  }
  *v21 = 10;
  a1[v3 + 1] = 0;
  return v3 + 1;
}
