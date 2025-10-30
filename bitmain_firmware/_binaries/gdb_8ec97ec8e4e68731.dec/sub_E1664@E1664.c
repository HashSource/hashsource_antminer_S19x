int __fastcall sub_E1664(int a1, int a2)
{
  int result; // r0

  result = sub_274C9C("btrace-conf", "btrace-conf.dtd", &off_388DE4, a2, a1);
  if ( result )
    sub_946E0("Error parsing branch trace configuration.");
  return result;
}
