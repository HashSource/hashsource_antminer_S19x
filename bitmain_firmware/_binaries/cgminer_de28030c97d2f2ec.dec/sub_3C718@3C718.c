void sub_3C718()
{
  char v0[2048]; // [sp+4h] [bp-808h] BYREF
  int v1; // [sp+804h] [bp-8h]

  v1 = nice(10);
  if ( !v1 && (byte_91F58 || byte_87769 || dword_8697C > 5) )
  {
    strcpy(v0, "Unable to set thread to low priority");
    sub_1E4EC(6, v0, 0);
  }
}
