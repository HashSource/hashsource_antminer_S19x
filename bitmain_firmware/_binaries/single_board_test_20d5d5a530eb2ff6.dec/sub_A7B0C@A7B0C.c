int __fastcall sub_A7B0C(int a1, int a2, const void *a3, size_t a4, size_t *a5)
{
  int result; // r0

  if ( !sub_95448(a1) || sub_95DA0(a1) )
    goto LABEL_2;
  result = (*(int (__fastcall **)(int))(a1 + 24))(a1);
  if ( result < 0 )
    return result;
  if ( result )
  {
LABEL_2:
    if ( a4 > 0x4000 )
    {
      sub_D0048(20, 268, 334, "ssl/d1_msg.c", 29);
      return -1;
    }
    else
    {
      return sub_7D1C4(a1, a2, a3, a4, a5);
    }
  }
  else
  {
    sub_D0048(20, 268, 229, "ssl/d1_msg.c", 23);
    return -1;
  }
}
