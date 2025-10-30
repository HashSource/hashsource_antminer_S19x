int sub_244600()
{
  int v1; // r4
  int (**v2)(); // [sp+4h] [bp-1Ch] BYREF
  char *v3; // [sp+8h] [bp-18h]
  int v4; // [sp+Ch] [bp-14h]
  char v5; // [sp+10h] [bp-10h] BYREF

  if ( !sub_183D9C() )
    return 1;
  sub_256760(&v2);
  v2 = &off_3F2924;
  v3 = &v5;
  v4 = 0;
  v5 = 0;
  sub_2564E4(&v2, "A debugging session is active.\n\n", 32);
  sub_183B38((int (__fastcall *)(int, int))sub_242A54, (int)&v2);
  sub_2564E4(&v2, "\nQuit anyway? ", 14);
  v1 = sub_25A3E4("%s", v3);
  sub_256478(&v2);
  return v1;
}
