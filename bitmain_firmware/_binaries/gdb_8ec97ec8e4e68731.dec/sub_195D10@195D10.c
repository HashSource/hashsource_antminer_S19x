int __fastcall sub_195D10(int result, int a2, int a3, int a4, _DWORD *a5, char a6, int a7, int a8)
{
  char v9; // r3
  int v11; // r3
  int v12; // r3
  int (__fastcall *v13)(_DWORD *, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int); // r4
  _DWORD *j; // r6
  int v15; // r7
  int k; // r4
  int *v17; // r3
  int v18; // r4
  int v19; // r0
  int (__fastcall *v20)(int, int, int, _DWORD *, int (*)()); // r6
  _DWORD *i; // [sp+1Ch] [bp-48h]
  _DWORD *v22; // [sp+20h] [bp-44h]
  _DWORD *v23; // [sp+28h] [bp-3Ch]
  int v24; // [sp+30h] [bp-34h]
  char v26; // [sp+38h] [bp-2Ch]
  int v27; // [sp+40h] [bp-24h]
  int v28; // [sp+44h] [bp-20h]
  _DWORD v29[2]; // [sp+50h] [bp-14h] BYREF
  _DWORD *v30; // [sp+58h] [bp-Ch]
  int (*v31)(); // [sp+5Ch] [bp-8h]

  v23 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    v9 = (char)a5;
    v24 = result;
    if ( a5 )
      v9 = 1;
    v26 = v9;
    do
    {
      if ( a5 == v23 )
        v11 = 0;
      else
        v11 = v26 & 1;
      if ( !v11 && !v23[6] )
      {
        result = ((int (__fastcall *)(_DWORD *))loc_1CD290)(v23);
        for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
        {
          v12 = i[33];
          if ( v12 )
          {
            v13 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)(v12 + 40) + 48);
            v29[0] = 0;
            v29[1] = 0;
            v30 = 0;
            v31 = 0;
            result = v13(i, 0, 0, a2, 0, 0, 0, 0, a4);
          }
          for ( j = (_DWORD *)i[5]; j; j = (_DWORD *)*j )
          {
            v15 = j[3];
            result = a7;
            v27 = a7;
            v28 = a8;
            for ( k = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v15 + 4) + 32) + 12); k; k = *(_DWORD *)(k + 12) )
              result = (*((int (__fastcall **)(int, int, int, int, int))off_46D5A4[0] + 37))(k, a2, a3, v27, v28);
            if ( a6 )
            {
              v17 = *(int **)(*(_DWORD *)(v15 + 4) + 32);
              if ( *v17 > 2 )
              {
                v18 = 2;
                v22 = j;
                do
                {
                  v19 = v17[v18 + 2];
                  v20 = *(int (__fastcall **)(int, int, int, _DWORD *, int (*)()))(*(_DWORD *)v24 + 148);
                  v29[0] = &a7;
                  ++v18;
                  v30 = v29;
                  v31 = sub_195364;
                  result = v20(v19, a2, a3, v29, sub_195364);
                  v17 = *(int **)(*(_DWORD *)(v15 + 4) + 32);
                }
                while ( *v17 > v18 );
                j = v22;
              }
            }
          }
        }
      }
      v23 = (_DWORD *)*v23;
    }
    while ( v23 );
  }
  return result;
}
