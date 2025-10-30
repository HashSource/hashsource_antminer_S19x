int __fastcall sub_27EEB4(void *a1)
{
  void *v1; // r11
  int result; // r0

  v1 = off_46DED0;
  off_46DED0 = a1;
  sub_289B24("\x1B[A", sub_2974E4);
  sub_289B24("\x1B[B", sub_2975E4);
  sub_289B24("\x1B[C", sub_295408);
  sub_289B24("\x1B[D", sub_29534C);
  sub_289B24("\x1B[H", sub_2954D0);
  sub_289B24("\x1B[F", sub_2954E8);
  sub_289B24("\x1BOA", sub_2974E4);
  sub_289B24("\x1BOB", sub_2975E4);
  sub_289B24("\x1BOC", sub_295408);
  sub_289B24("\x1BOD", sub_29534C);
  sub_289B24("\x1BOH", sub_2954D0);
  result = sub_289B24("\x1BOF", sub_2954E8);
  off_46DED0 = v1;
  return result;
}
