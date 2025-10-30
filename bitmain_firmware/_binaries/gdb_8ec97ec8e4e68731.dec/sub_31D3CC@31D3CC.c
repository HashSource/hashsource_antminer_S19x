int __fastcall sub_31D3CC(const char *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  _DWORD v6[9]; // [sp+0h] [bp-4Ch] BYREF
  size_t v7; // [sp+24h] [bp-28h]
  int v8; // [sp+28h] [bp-24h]
  int v9; // [sp+2Ch] [bp-20h]
  int v10; // [sp+30h] [bp-1Ch]
  int v11; // [sp+34h] [bp-18h]

  *a2 = 0;
  *a3 = 0;
  v6[0] = a1;
  v6[3] = a1;
  v7 = strlen(a1);
  v6[5] = 0;
  v6[1] = v6[0] + v7;
  v6[8] = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v6[4] = v6;
  v6[7] = v6;
  v6[6] = 2 * v7;
  v6[2] = 0x4000;
  result = sub_31CFBC(v6, 1);
  if ( result )
  {
    while ( 2 )
    {
      switch ( *(_DWORD *)result )
      {
        case 1:
        case 2:
          result = *(_DWORD *)(result + 12);
          goto LABEL_8;
        case 3:
        case 4:
          result = *(_DWORD *)(result + 8);
LABEL_8:
          if ( !result )
            return result;
          continue;
        case 7:
          *a2 = *(_DWORD *)(result + 8);
          return 1;
        case 8:
          *a3 = *(_DWORD *)(result + 8);
          return 1;
        default:
          return 0;
      }
    }
  }
  return result;
}
