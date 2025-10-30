int __fastcall sub_10C970(int a1, signed int *a2)
{
  int v2; // r6
  int v3; // r7
  unsigned int v4; // r5
  int v5; // r0
  const char **v6; // r10
  int v7; // r8
  const char **v8; // r4
  const char **v9; // r9
  const char *v10; // t1
  const char *v11; // r0
  _BYTE *v12; // r1
  _BYTE *v13; // r0
  _BYTE *v14; // t1
  int v15; // r3
  _BYTE *v16; // r2
  int v17; // t1
  int v18; // r10
  signed int v20; // [sp+4h] [bp-18h]
  int v22; // [sp+Ch] [bp-10h]
  int v24; // [sp+14h] [bp-8h]

  v2 = sub_BADF8();
  if ( v2 )
  {
    v3 = 0;
    v22 = sub_10C010(a2[1]);
    v20 = *a2;
    if ( v22 > 0 )
    {
      v4 = 0;
      v24 = 4 * *a2;
      do
      {
        v5 = sub_10C01C((_DWORD *)a2[1], v4);
        if ( v20 <= 0 )
        {
          if ( !sub_BAF60((unsigned int *)v2, v20) )
            goto LABEL_22;
          v12 = *(_BYTE **)(v2 + 4);
        }
        else
        {
          v6 = (const char **)v5;
          v7 = 0;
          v8 = (const char **)v5;
          v9 = (const char **)(v5 + v24);
          do
          {
            v10 = *v8++;
            v11 = v10;
            if ( v10 )
              v7 += strlen(v11);
          }
          while ( v9 != v8 );
          if ( !sub_BAF60((unsigned int *)v2, v20 + 2 * v7) )
            goto LABEL_22;
          v12 = *(_BYTE **)(v2 + 4);
          do
          {
            v14 = *v6++;
            v13 = v14;
            if ( v14 )
            {
              v15 = (unsigned __int8)*v13;
              if ( *v13 )
              {
                do
                {
                  v16 = v12;
                  if ( v15 == 9 )
                  {
                    *v12 = 92;
                    v16 = v12 + 1;
                    LOBYTE(v15) = *v13;
                  }
                  v12 = v16 + 1;
                  *v16 = v15;
                  v17 = (unsigned __int8)*++v13;
                  v15 = v17;
                }
                while ( v17 );
              }
            }
            *v12++ = 9;
          }
          while ( v9 != v6 );
        }
        *(v12 - 1) = 10;
        v18 = (int)&v12[-*(_DWORD *)(v2 + 4)];
        if ( v18 != sub_B69CC(a1, *(_DWORD *)(v2 + 4), v18) )
          goto LABEL_22;
        ++v4;
        v3 += v18;
      }
      while ( v4 != v22 );
    }
    sub_BAE3C(v2);
    return v3;
  }
  else
  {
LABEL_22:
    sub_BAE3C(v2);
    return -1;
  }
}
