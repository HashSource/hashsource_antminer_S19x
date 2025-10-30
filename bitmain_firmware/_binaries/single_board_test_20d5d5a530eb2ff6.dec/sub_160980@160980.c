int __fastcall sub_160980(_DWORD *a1, unsigned __int8 *a2, size_t *a3)
{
  int v6; // r0

  v6 = sub_B0FDC(a3, 0, a2);
  if ( sub_B550C(a1[4], "Content-Type: application/ocsp-request\r\nContent-Length: %d\r\n\r\n", v6) <= 0
    || sub_126238(a2, a1[4], a3) <= 0 )
  {
    return 0;
  }
  *a1 = 4101;
  return 1;
}
