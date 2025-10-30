void sub_3B748()
{
  char v0[2048]; // [sp+4h] [bp-808h] BYREF
  int v1; // [sp+804h] [bp-8h]

  v1 = nice(-10);
  if ( !v1 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v0, "Unable to set thread to high priority");
    sub_1DB6C(7, v0, 0);
  }
}
