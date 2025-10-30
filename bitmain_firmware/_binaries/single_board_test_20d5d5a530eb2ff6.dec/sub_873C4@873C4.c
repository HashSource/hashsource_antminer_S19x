int __fastcall sub_873C4(int a1)
{
  int v1; // r3
  int v2; // r2

  v1 = *(_DWORD *)(a1 + 28);
  switch ( v1 )
  {
    case 1:
      v2 = 0;
      break;
    case 2:
      v2 = 1;
      break;
    case 4:
      v2 = 2;
      break;
    case 8:
      v2 = 3;
      break;
    case 16:
      v2 = 4;
      break;
    case 32:
      v2 = 5;
      break;
    case 128:
      v2 = 6;
      break;
    case 256:
      v2 = 7;
      break;
    case 512:
      v2 = 8;
      break;
    default:
      v2 = 9;
      if ( v1 )
        return 0;
      break;
  }
  return dword_1A9064[2 * v2 + 45];
}
