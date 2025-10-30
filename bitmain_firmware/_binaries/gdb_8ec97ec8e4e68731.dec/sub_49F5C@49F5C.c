_QWORD *__fastcall sub_49F5C(_QWORD *result, _QWORD *a2)
{
  _QWORD *v3; // r5
  _DWORD *v4; // r4
  int v5; // r9
  __int64 v6; // r2
  _QWORD *v7; // r0
  __int64 v8; // r6
  _QWORD *v9; // r10
  int v10; // lr
  _DWORD *v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _QWORD *v16; // [sp+8h] [bp-38h]
  int v17; // [sp+Ch] [bp-34h]
  int v18; // [sp+10h] [bp-30h]
  int v19; // [sp+14h] [bp-2Ch]

  if ( result != a2 && a2 != result + 2 )
  {
    v3 = result;
    v4 = result + 4;
    v5 = -16 - (_DWORD)result;
    while ( 1 )
    {
      v6 = *((_QWORD *)v4 - 1);
      v7 = v4 - 4;
      v8 = v3[1];
      v9 = v4;
      if ( v6 == v8 )
      {
        if ( v6 == *((_QWORD *)v4 - 2) )
          goto LABEL_10;
        v8 = *v3;
        if ( v6 == *v3 )
          goto LABEL_5;
        v6 = *((_QWORD *)v4 - 2);
      }
      if ( v6 < v8 )
      {
LABEL_10:
        v10 = ((int)v4 + v5) >> 4;
        v16 = *(_QWORD **)v7;
        v17 = *(v4 - 3);
        v18 = *(v4 - 2);
        v19 = *(v4 - 1);
        if ( (int)v4 + v5 > 0 )
        {
          v11 = v4;
          do
          {
            --v10;
            v12 = *(v11 - 8);
            v13 = *(v11 - 7);
            v14 = *(v11 - 6);
            v15 = *(v11 - 5);
            v11 -= 4;
            *v11 = v12;
            v11[1] = v13;
            v11[2] = v14;
            v11[3] = v15;
          }
          while ( v10 );
        }
        v4 += 4;
        result = v16;
        *(_DWORD *)v3 = v16;
        *((_DWORD *)v3 + 1) = v17;
        *((_DWORD *)v3 + 2) = v18;
        *((_DWORD *)v3 + 3) = v19;
        if ( a2 == v9 )
          return result;
      }
      else
      {
LABEL_5:
        v4 += 4;
        result = sub_49ED0(v7);
        if ( a2 == v9 )
          return result;
      }
    }
  }
  return result;
}
