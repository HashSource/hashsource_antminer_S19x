int __fastcall sub_18BD4(int a1, int a2)
{
  int v2; // r2

  switch ( a2 )
  {
    case 0:
    case 1:
      v2 = 0;
      break;
    case 2:
    case 3:
      v2 = 1;
      break;
    default:
      v2 = a2;
      break;
  }
  return sub_182B4(a1, 3u, v2);
}
