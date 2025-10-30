int __fastcall ossl_statem_server_max_message_size(int a1)
{
  int result; // r0

  switch ( *(_DWORD *)(a1 + 64) )
  {
    case 0x14:
      result = 131396;
      break;
    case 0x1B:
      result = *(_DWORD *)(a1 + 1276);
      break;
    case 0x1C:
      result = 2048;
      break;
    case 0x1D:
      result = 0x4000;
      break;
    case 0x1E:
      result = 514;
      break;
    case 0x1F:
    case 0x2C:
      result = 1;
      break;
    case 0x20:
      result = 64;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
