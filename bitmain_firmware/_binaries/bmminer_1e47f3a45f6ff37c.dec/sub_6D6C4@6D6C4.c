ssize_t sub_6D6C4()
{
  ssize_t result; // r0
  char v1[2051]; // [sp+0h] [bp-80Ch] BYREF
  char buf; // [sp+803h] [bp-9h] BYREF
  ssize_t v3; // [sp+804h] [bp-8h]

  buf = 49;
  result = write(dword_B3988, &buf, 1u);
  v3 = result;
  if ( result != 1 )
  {
    strcpy(v1, "error! write SCL high\n");
    return sub_3B6AC(3, v1, 0, (int)v1);
  }
  return result;
}
