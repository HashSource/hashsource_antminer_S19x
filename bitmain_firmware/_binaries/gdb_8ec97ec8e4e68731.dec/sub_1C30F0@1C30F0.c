int __fastcall sub_1C30F0(int result, int a2, unsigned int *a3, int *a4)
{
  int v5; // r3
  int v6; // r4
  int v8; // r7
  unsigned int v9; // r1
  int v10; // r7

  if ( a2 <= 0 )
    sub_946E0("?error in operator_length_standard");
  v5 = *(_DWORD *)(result + 16 * a2);
  v6 = result + 16 * a2;
  switch ( v5 )
  {
    case 29:
      v8 = 1;
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = result + 5;
      goto LABEL_7;
    case 31:
    case 49:
      goto LABEL_6;
    case 32:
    case 52:
    case 56:
      goto LABEL_13;
    case 35:
    case 36:
      v8 = 3;
      v9 = 1;
      goto LABEL_7;
    case 37:
    case 46:
    case 48:
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = 3;
      v8 = result + 1;
      goto LABEL_7;
    case 38:
    case 39:
    case 40:
    case 42:
      v8 = 0;
      v9 = 4;
      goto LABEL_7;
    case 41:
    case 43:
    case 45:
    case 75:
    case 76:
    case 79:
    case 88:
      goto LABEL_8;
    case 44:
    case 50:
    case 80:
    case 85:
    case 89:
    case 90:
      v8 = 0;
      goto LABEL_15;
    case 47:
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = 4;
      v8 = result + 1;
      goto LABEL_7;
    case 51:
      v10 = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      result = sub_26725C(*(_DWORD *)(v6 - 32), *(_DWORD *)(v6 - 28));
      v9 = 4;
      v8 = v10 - result + 1;
      goto LABEL_7;
    case 53:
    case 54:
    case 55:
    case 57:
      goto LABEL_12;
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 77:
    case 78:
    case 93:
    case 94:
    case 95:
      goto LABEL_11;
    case 81:
    case 82:
      v8 = 1;
LABEL_15:
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = ((unsigned int)(result + 16) >> 4) + 4;
      goto LABEL_7;
    case 84:
      v8 = 0;
      v9 = 2;
      goto LABEL_7;
    case 86:
      v8 = 0;
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = ((unsigned int)(result + 16) >> 4) + 5;
      goto LABEL_7;
    case 87:
      v8 = 1;
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = ((unsigned int)(result + 16) >> 4) + 4;
      goto LABEL_7;
    case 91:
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      if ( result <= 0 )
        goto LABEL_8;
      if ( result <= 2 )
      {
LABEL_13:
        v8 = 1;
        v9 = 3;
      }
      else if ( result == 3 )
      {
LABEL_6:
        v8 = 2;
        v9 = 3;
      }
      else
      {
LABEL_8:
        v8 = 0;
        v9 = 3;
      }
LABEL_7:
      *a3 = v9;
      *a4 = v8;
      return result;
    case 92:
      v8 = 0;
      result = sub_26725C(*(_DWORD *)(v6 - 16), *(_DWORD *)(v6 - 12));
      v9 = ((unsigned int)(result + 16) >> 4) + 6;
      goto LABEL_7;
    default:
      if ( v5 <= 33 )
      {
LABEL_12:
        v8 = 2;
        v9 = 1;
      }
      else
      {
LABEL_11:
        v8 = 1;
        v9 = 1;
      }
      goto LABEL_7;
  }
}
