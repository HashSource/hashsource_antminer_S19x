int __fastcall sub_DEB64(int a1, int a2, int a3, __int64 *a4)
{
  int v6; // r4
  __int64 v7; // r2
  int result; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  __int64 v12; // r2
  __int64 v13; // r2
  bool v14; // cf
  __int64 v15; // r2

  v6 = *(_DWORD *)(a1 + 20);
  switch ( a2 )
  {
    case 4104:
      if ( !a4 )
        goto LABEL_32;
      if ( a3 < 0 )
        goto LABEL_31;
      if ( *(_DWORD *)v6 )
        sub_E0758(*(_DWORD *)v6, *(_DWORD *)(v6 + 4), (size_t)"crypto/kdf/scrypt.c");
      if ( a3 )
        v9 = sub_E9E68(a4, a3, "crypto/kdf/scrypt.c", 103);
      else
        v9 = CRYPTO_malloc(1, "crypto/kdf/scrypt.c", 105);
      *(_DWORD *)v6 = v9;
      if ( !v9 )
        goto LABEL_35;
      *(_DWORD *)(v6 + 4) = a3;
      result = 1;
      break;
    case 4105:
      if ( a4 )
      {
        if ( a3 < 0 )
          goto LABEL_31;
        v10 = *(_DWORD *)(v6 + 8);
        if ( v10 )
          sub_E0758(v10, *(_DWORD *)(v6 + 12), (size_t)"crypto/kdf/scrypt.c");
        if ( a3 )
          v11 = sub_E9E68(a4, a3, "crypto/kdf/scrypt.c", 103);
        else
          v11 = CRYPTO_malloc(1, "crypto/kdf/scrypt.c", 105);
        *(_DWORD *)(v6 + 8) = v11;
        if ( v11 )
        {
          *(_DWORD *)(v6 + 12) = a3;
          result = 1;
        }
        else
        {
LABEL_35:
          sub_D0048(52, 107, 65, (int)"crypto/kdf/scrypt.c", 108);
          result = 0;
        }
      }
      else
      {
LABEL_32:
        result = 1;
      }
      break;
    case 4106:
      v13 = *a4;
      v14 = 1;
      if ( !*((_DWORD *)a4 + 1) )
        v14 = (unsigned int)v13 >= 2;
      if ( !v14 || ((v13 - 1) & v13) != 0 )
        goto LABEL_31;
      *(_QWORD *)(v6 + 16) = v13;
      result = 1;
      break;
    case 4107:
      v12 = *a4;
      if ( !*a4 )
        goto LABEL_31;
      *(_QWORD *)(v6 + 24) = v12;
      result = 1;
      break;
    case 4108:
      v15 = *a4;
      if ( !*a4 )
        goto LABEL_31;
      *(_QWORD *)(v6 + 32) = v15;
      result = 1;
      break;
    case 4109:
      v7 = *a4;
      if ( *a4 )
      {
        result = 1;
        *(_QWORD *)(v6 + 40) = v7;
      }
      else
      {
LABEL_31:
        result = 0;
      }
      break;
    default:
      result = -2;
      break;
  }
  return result;
}
