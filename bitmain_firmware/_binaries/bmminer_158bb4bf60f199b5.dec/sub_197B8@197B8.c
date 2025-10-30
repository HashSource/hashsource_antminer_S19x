int __fastcall sub_197B8(int a1)
{
  int result; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  sub_1A7AC();
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "chain[%d] PIC jump to app\n", a1);
    sub_47AB4(3, s, 0);
  }
  sub_7157C((unsigned __int8)a1);
  result = sub_711A0((unsigned __int8)a1);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Check chain[%d] PIC fw version=0x%02x\n", a1, result);
    return sub_47AB4(3, s, 0);
  }
  return result;
}
