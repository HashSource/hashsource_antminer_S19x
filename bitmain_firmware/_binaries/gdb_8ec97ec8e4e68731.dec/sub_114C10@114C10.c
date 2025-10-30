int __fastcall sub_114C10(int a1, _BYTE *a2, unsigned int a3, unsigned int *a4, int *a5, int *a6, int a7)
{
  unsigned int v10; // r8
  char *v11; // r6
  unsigned int v12; // r7
  char v13; // r2
  int v14; // r3
  char *v15; // r6
  bool v16; // zf
  int v17; // r2
  char v18; // lr
  char v19; // t1
  unsigned int v20; // r10
  char v23; // r6
  char v24; // r2
  char *v25; // r12
  int v26; // r3
  int v27; // r2
  char v28; // t1
  unsigned int v29; // r10
  char v30; // r2
  char *v31; // r12
  int v32; // r3
  int v33; // r2
  char v34; // r6
  char v35; // t1
  unsigned int v36; // r10
  char v37; // r2
  char *v38; // r12
  int v39; // r3
  int v40; // r2
  char v41; // r0
  char v42; // t1
  unsigned int v43; // r6
  char *v44; // r8
  char *v45; // r8
  int v46; // r0
  char *v47; // r6
  char *v48; // r6

  if ( a2 != (_BYTE *)a3 )
  {
    v10 = (unsigned int)(a2 + 1);
    switch ( *a2 )
    {
      case 0:
        *a4 = v10;
        return 0;
      case 1:
        v23 = 0;
        *a5 = 0;
        if ( a3 <= v10 )
          return -1;
        v24 = a2[1];
        v25 = a2 + 2;
        v26 = 0;
        v16 = (v24 & 0x80) == 0;
        v27 = v24 & 0x7F;
        if ( v16 )
          goto LABEL_32;
        while ( 1 )
        {
          v23 += 7;
          if ( a3 <= (unsigned int)v25 )
            break;
          v28 = *v25++;
          v29 = v28 & 0x7F;
          v27 |= v29 << v23;
          v26 |= (v29 << (v23 - 32)) | (v29 >> (32 - v23));
          if ( (v28 & 0x80) == 0 )
          {
LABEL_32:
            if ( v25 != (char *)v10 )
            {
              v44 = v25;
              if ( v25 )
              {
                *a6 = sub_132070(a1, v27);
                *a4 = (unsigned int)v44;
                return 1;
              }
            }
            return -1;
          }
        }
        return -1;
      case 2:
        if ( a3 <= v10 )
          return -1;
        v30 = a2[1];
        v31 = a2 + 2;
        v32 = 0;
        v16 = (v30 & 0x80) == 0;
        v33 = v30 & 0x7F;
        if ( v16 )
          goto LABEL_3;
        v34 = 0;
        while ( 1 )
        {
          v34 += 7;
          if ( a3 <= (unsigned int)v31 )
            return -1;
          v35 = *v31++;
          v36 = v35 & 0x7F;
          v33 |= v36 << v34;
          v32 |= (v36 << (v34 - 32)) | (v36 >> (32 - v34));
          if ( (v35 & 0x80) == 0 )
          {
LABEL_3:
            v11 = &v31[-v10];
            if ( v31 != (char *)v10 )
            {
              v12 = (unsigned int)v31;
              if ( v31 )
              {
                *a5 = sub_132070(a1, v33);
                if ( a3 > v12 )
                {
                  v13 = v11[v10];
                  v14 = 0;
                  v15 = (char *)(v12 + 1);
                  v16 = (v13 & 0x80) == 0;
                  v17 = v13 & 0x7F;
                  if ( v16 )
                  {
LABEL_39:
                    v47 = &v15[-v12];
                    if ( v47 )
                    {
                      v48 = &v47[v12];
                      if ( v48 )
                      {
                        *a6 = sub_132070(a1, v17);
                        *a4 = (unsigned int)v48;
                        return 2;
                      }
                    }
                  }
                  else
                  {
                    v18 = 0;
                    while ( 1 )
                    {
                      v18 += 7;
                      if ( (char *)a3 == v15 )
                        break;
                      v19 = *v15++;
                      v20 = v19 & 0x7F;
                      v17 |= v20 << v18;
                      v14 |= (v20 << (v18 - 32)) | (v20 >> (32 - v18));
                      if ( (v19 & 0x80) == 0 )
                        goto LABEL_39;
                    }
                  }
                }
              }
            }
            return -1;
          }
        }
      case 3:
        if ( a3 <= v10 )
          return -1;
        v37 = a2[1];
        v38 = a2 + 2;
        v39 = 0;
        v16 = (v37 & 0x80) == 0;
        v40 = v37 & 0x7F;
        if ( v16 )
          goto LABEL_35;
        v41 = 0;
        break;
      default:
        return -2;
    }
    while ( 1 )
    {
      v41 += 7;
      if ( a3 <= (unsigned int)v38 )
        break;
      v42 = *v38++;
      v43 = v42 & 0x7F;
      v40 |= v43 << v41;
      v39 |= (v43 << (v41 - 32)) | (v43 >> (32 - v41));
      if ( (v42 & 0x80) == 0 )
      {
LABEL_35:
        if ( v38 != (char *)v10 )
        {
          v45 = v38;
          if ( v38 )
          {
            v46 = sub_132070(a1, v40);
            *a5 = v46;
            if ( (unsigned int)(v45 + 4) <= a3 )
            {
              *a6 = v46;
              *a6 += sub_15C250(v45, 4, a7);
              *a4 = (unsigned int)(v45 + 4);
              return 3;
            }
          }
        }
        return -1;
      }
    }
  }
  return -1;
}
