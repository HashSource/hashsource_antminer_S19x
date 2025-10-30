FILE **__fastcall sub_256A48(FILE **ptr)
{
  int v1; // r3

  v1 = *((unsigned __int8 *)ptr + 12);
  *ptr = (FILE *)&off_3F294C;
  if ( v1 )
    fclose(ptr[1]);
  sub_33AC04(ptr);
  return ptr;
}
