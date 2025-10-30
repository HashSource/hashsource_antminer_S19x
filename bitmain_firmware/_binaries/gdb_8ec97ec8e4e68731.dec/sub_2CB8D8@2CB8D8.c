bool __fastcall sub_2CB8D8(int a1, int a2)
{
  if ( sub_2AD7AC(a1, ".tls_data")
    && (!sub_2E3078(a2, 1610612752, 0) || !sub_2E3078(a2, 1610612753, 0) || !sub_2E3078(a2, 1610612757, 0)) )
  {
    return 0;
  }
  if ( sub_2AD7AC(a1, ".tls_vars") )
  {
    if ( sub_2E3078(a2, 1610612754, 0) )
      return sub_2E3078(a2, 1610612755, 0) != 0;
    return 0;
  }
  return 1;
}
