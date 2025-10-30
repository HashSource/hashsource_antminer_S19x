char *__fastcall sub_7D528(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 1624);
  switch ( v1 )
  {
    case 241:
      return "read body";
    case 242:
      return "read done";
    case 240:
      return "read header";
  }
  return "unknown";
}
