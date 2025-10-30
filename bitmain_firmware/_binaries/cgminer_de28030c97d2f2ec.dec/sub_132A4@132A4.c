int __fastcall sub_132A4(char *a1, socklen_t a2)
{
  if ( !sub_131C0("eth0", a1, a2) )
    return 0;
  fwrite("Failed to retrieve and modify IP address for eth0.\n", 1u, 0x33u, (FILE *)stderr);
  return -1;
}
