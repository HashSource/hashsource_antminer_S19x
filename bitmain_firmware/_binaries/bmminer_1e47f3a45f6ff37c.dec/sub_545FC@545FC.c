int __fastcall sub_545FC(void *a1)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, 0x10u);
  return sub_5449C("eth0", (int)a1);
}
