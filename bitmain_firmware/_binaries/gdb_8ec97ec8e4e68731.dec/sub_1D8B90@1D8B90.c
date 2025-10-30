void sub_1D8B90()
{
  if ( dword_48794C == 1 )
  {
    if ( off_46DAB8[1] )
      off_46DAB8 = (int *)off_46DAB8[1];
  }
  else
  {
    off_46DAB8 = (int *)*off_46DAB8;
  }
}
