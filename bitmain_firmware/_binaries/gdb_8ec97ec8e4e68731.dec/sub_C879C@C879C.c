int __fastcall sub_C879C(int result, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r4
  int v6; // r10
  _DWORD *v7; // r12
  const char *v8; // r0
  _DWORD *v12; // r6
  int v13; // r1
  _DWORD *v14; // r3
  int v15; // r1
  const char *v16; // r1
  char *v17; // r2
  int v18; // r4
  _DWORD *v19; // r0
  int v20; // [sp+4h] [bp-10h]

  v5 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    v6 = 0;
    do
    {
      if ( (int)v5[6] > 0 )
      {
        v7 = (_DWORD *)v5[7];
        if ( v7 )
        {
          while ( a2 != v7[12] || a3 != v7[13] || dword_489690 && a4 != v7[16] )
          {
            v7 = (_DWORD *)*v7;
            if ( !v7 )
              goto LABEL_12;
          }
          ++v6;
        }
      }
LABEL_12:
      v5 = (_DWORD *)v5[2];
    }
    while ( v5 );
    if ( v6 )
    {
      v20 = result;
      if ( v6 == 1 )
        LOWORD(v8) = -2152;
      else
        LOWORD(v8) = -2132;
      HIWORD(v8) = 55;
      sub_259F10(v8);
      v12 = (_DWORD *)dword_478348;
      if ( dword_478348 )
      {
        do
        {
          v13 = v12[6];
          if ( v13 > 0 )
          {
            v14 = (_DWORD *)v12[7];
            if ( v14 )
            {
              while ( a2 != v14[12] || a3 != v14[13] || dword_489690 && a4 != v14[16] )
              {
                v14 = (_DWORD *)*v14;
                if ( !v14 )
                  goto LABEL_39;
              }
              --v6;
              sub_259F10("%d", v13);
              v15 = v12[28];
              if ( v15 == -1 )
              {
                if ( a5 != -1 )
                  sub_259F10(" (all threads)");
              }
              else
              {
                sub_259F10(" (thread %d)", v15);
              }
              if ( (v12[4] & 0xFFFFFFFD) != 0 )
                v16 = "";
              else
                v16 = " (disabled)";
              if ( v6 <= 1 )
              {
                if ( v6 == 1 )
                  v17 = (char *)63376;
                else
                  v17 = "";
                if ( v6 == 1 )
                  HIWORD(v17) = 55;
              }
              else
              {
                v17 = (char *)&word_3D7D40;
              }
              sub_259F10("%s%s ", v16, v17);
            }
          }
LABEL_39:
          v12 = (_DWORD *)v12[2];
        }
        while ( v12 );
      }
      sub_259F10("also set at pc ");
      v18 = sub_25AC8C(v20, a3);
      v19 = (_DWORD *)sub_242F8C(v18);
      sub_25A6BC(v18, *v19);
      return sub_259F10(".\n");
    }
  }
  return result;
}
