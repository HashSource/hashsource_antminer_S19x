int __fastcall sub_2CB9B0(int a1, _DWORD *a2)
{
  int v3; // r2
  int result; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3

  switch ( *a2 )
  {
    case 0x60000010:
      v5 = *((_DWORD *)sub_2AD7AC(a1, ".tls_data") + 7);
      a2[1] = v5;
      result = 1;
      break;
    case 0x60000011:
      v6 = *((_DWORD *)sub_2AD7AC(a1, ".tls_data") + 9);
      a2[1] = v6;
      result = 1;
      break;
    case 0x60000012:
      v7 = *((_DWORD *)sub_2AD7AC(a1, ".tls_vars") + 7);
      a2[1] = v7;
      result = 1;
      break;
    case 0x60000013:
      v8 = *((_DWORD *)sub_2AD7AC(a1, ".tls_vars") + 9);
      a2[1] = v8;
      result = 1;
      break;
    case 0x60000015:
      v3 = *((_DWORD *)sub_2AD7AC(a1, ".tls_data") + 16);
      a2[1] = 1 << v3;
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
