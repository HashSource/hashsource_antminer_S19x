int __fastcall sub_17195C(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  int v5; // r0
  int v6; // r2
  int result; // r0
  int v8; // r12
  __int64 *v9; // r3
  __int64 v10; // r0
  __int64 *v11; // r12
  __int64 v12; // r6
  unsigned int v13; // r3
  int v14; // r2
  int v15; // r1
  bool v16; // cf
  __int64 v17; // r2
  int v18; // r1

  v5 = sub_171258(a1);
  v6 = *(_DWORD *)(v5 + 24);
  switch ( *(_BYTE *)v6 )
  {
    case 5:
      v8 = *(__int16 *)(v6 + 4);
      if ( v8 <= 0 )
      {
        *a2 = 0;
        *a3 = -1;
        result = 0;
      }
      else
      {
        v9 = *(__int64 **)(v6 + 24);
        v10 = *v9;
        v11 = &v9[3 * (__int16)v8];
        *a3 = *v9;
        *a2 = v10;
        do
        {
          v12 = *v9;
          if ( *v9 < v10 )
          {
            *a2 = v12;
            v12 = *v9;
          }
          v9 += 3;
          if ( *a3 < v12 )
            *a3 = v12;
          v10 = *a2;
        }
        while ( v9 != v11 );
        result = 0;
        if ( v10 >= 0 )
          *(_BYTE *)(v6 + 1) |= 1u;
      }
      break;
    case 8:
      v13 = *(_DWORD *)(v5 + 20);
      if ( v13 > 8 )
        goto LABEL_17;
      result = *(_BYTE *)(v6 + 1) & 1;
      v14 = 1 << (8 * v13 - 1);
      if ( result )
        goto LABEL_14;
      *a2 = -v14;
      *a3 = v14 - 1;
      break;
    case 0xC:
      v18 = *(_DWORD *)(v6 + 24);
      *a2 = *(_QWORD *)(v18 + 8);
      *a3 = *(_QWORD *)(v18 + 24);
      result = 1;
      break;
    case 0x14:
      v14 = 1 << (8 * *(_BYTE *)(v5 + 20) - 1);
LABEL_14:
      v15 = v14 >> 31;
      v16 = v14 != 0;
      LODWORD(v17) = (v14 - 1) | v14;
      HIDWORD(v17) = (v15 - !v16) | v15;
      *a2 = 0;
      *a3 = v17;
      result = 0;
      break;
    case 0x15:
      *a2 = 0;
      *a3 = 1;
      result = 0;
      break;
    default:
LABEL_17:
      result = -1;
      break;
  }
  return result;
}
