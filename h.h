<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="styles.css">
    <title>Dynamic Image Gallery</title>
</head>
<body>
    <div class="gallery">
        <img src="image1.jpg" alt="Image 1" class="thumbnail" data-description="Description for Image 1">
        <img src="image2.jpg" alt="Image 2" class="thumbnail" data-description="Description for Image 2">
        <img src="image3.jpg" alt="Image 3" class="thumbnail" data-description="Description for Image 3">
        <!-- Add more images as needed -->
    </div>

    <div class="lightbox" id="lightbox">
        <span class="close" id="close">&times;</span>
        <img class="lightbox-img" id="lightbox-img" src="" alt="">
        <div class="description" id="description"></div>
    </div>

    