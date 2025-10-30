int __fastcall sub_270FC(int a1)
{
  unsigned __int8 buf; // [sp+Fh] [bp-5h] BYREF

  if ( recv(a1, &buf, 1u, 0) == -1 )
    return -1;
  else
    return buf;
}
