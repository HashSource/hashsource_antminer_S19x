int sub_6D808()
{
  char v2[12]; // [sp+0h] [bp-80Ch] BYREF
  char buf; // [sp+803h] [bp-9h] BYREF
  ssize_t v4; // [sp+804h] [bp-8h]

  v4 = read(dword_B398C, &buf, 1u);
  if ( v4 == 1 )
  {
    return buf != 48;
  }
  else
  {
    snprintf(v2, 0x800u, "error! read SDA return %d\n", v4);
    sub_3B6AC(3, v2, 0, (int)v2);
    return -1;
  }
}
