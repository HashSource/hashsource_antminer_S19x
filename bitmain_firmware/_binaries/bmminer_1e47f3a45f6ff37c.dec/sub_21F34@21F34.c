int __fastcall sub_21F34(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "chain[%d] PIC jump to app\n", a1);
    sub_3B6AC(3, s, 0, v4);
  }
  sub_5CFE0((unsigned __int8)a1);
  usleep(0x7A120u);
  result = sub_5CD68((unsigned __int8)a1);
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "Check chain[%d] PIC fw version=0x%02x\n", a1, result);
    return sub_3B6AC(3, s, 0, v3);
  }
  return result;
}
