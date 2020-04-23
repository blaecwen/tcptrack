 
         for (int i = 0; i < primaryFileNames.size(); i++)
         {
            if (!addCamera(
                videoLayout,
                httpPort,
                cameraOptions,
                {primaryFileNames[i]},
                {secondaryFileNames[i]}))

             {
                 return false;
             }
	 }

